/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:23:40 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/07 13:23:04 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap()
{
    std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = copy;
}

//surcharge de l'operateur d'affectation
// this est l'objet cible qu'on veut modifier
// op est l'objet source qu'on veut copier les valeurs
ClapTrap& ClapTrap::operator=(const ClapTrap& op)
{
    if (this == &op)
        return (*this);
    
    this->_name = op._name;
    this->_hitP = op._hitP;
    this->_damage = op._damage;
    this->_energyP = op._energyP;
    
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
{
    this->_name = name;
}

void ClapTrap::attack(const std::string& target)// target = cible
{
    if (this->_hitP > 0 && this->_energyP > 0) // s il n est pas mort donc encore de point de vie
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << " causing " << _damage << " points of damage." << std::endl;
        this->_energyP -= 1;
    }    
    else
        std::cout << "ClapTrap " << _name << " can't attack." << std::endl;
}


//R subit un attaque
// takeDmage() est appellé pour mettre a jour le point de vie de R
//cette fonction recoit en parametre le nombre de degat 
void ClapTrap::takeDamage(unsigned int amount) // amount = montant ou quantite
{
    unsigned int newHitP = 0;
    
    if (amount > this->_hitP)
        newHitP = 0;
    else
        newHitP = this->_hitP - amount;
    this->_hitP = newHitP;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage, " << _hitP << " hit points left."<< std::endl;
}


// augmente _hitP de la quantite de amount
// ne peut pas se reparer s il est mort ou s il n a plus d energie
// cette action fait perdre un point d energie
void ClapTrap::beRepaired(unsigned int amount) // se reparer
{
    unsigned int newHitP = 0;
    
    if (this->_hitP > 0 && this->_energyP > 0)
    {
        newHitP = this->_hitP + amount;
        this->_hitP = newHitP;
        this->_energyP -= 1;
        std::cout << "ClapTrap " << _name << " is repaired " << " of " << amount << " points." << std::endl;
    }
    else
        std::cout << "ClapTrap " << _name << " can't be repaired." << std::endl;
}




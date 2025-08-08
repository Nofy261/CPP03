/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:23:40 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/08 13:18:00 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name(""), _hitP(10), _energyP(10), _attackDamage(0)
{
    std::cout << "Default constructor called." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitP(10), _energyP(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << name << " was created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "Copy constructor called." << std::endl;
    *this = copy;
}

std::string ClapTrap::getName() const
{
    return (this->_name);    
}

unsigned int ClapTrap::getHitP() const
{
    return (this->_hitP);    
}

unsigned int ClapTrap::getEnergyP() const
{
    return (this->_energyP);
}

unsigned int ClapTrap::getAttackDamage() const
{
    return (this->_attackDamage);
}

//surcharge de l'operateur d'affectation
// this est l'objet cible qu'on veut modifier
// other est l'objet source qu'on veut copier les valeurs
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    if (this != &other)
    {
        this->_name = other.getName();
        this->_hitP = other.getHitP();
        this->_energyP = other.getEnergyP();
        this->_attackDamage = other.getAttackDamage();
    }
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called." << std::endl;
}


void ClapTrap::attack(const std::string& target)// target = cible
{
    if (this->_hitP > 0 && this->_energyP > 0) // s il n est pas mort donc encore de point de vie
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        this->_energyP -= 1;
        return ;
    }    
    std::cout << "ClapTrap " << _name << " can't attack." << std::endl;
}


//R subit un attaque
// takeDmage() est appellé pour mettre a jour le point de vie de R
//cette fonction recoit en parametre le nombre de degat causé
void ClapTrap::takeDamage(unsigned int amount) // amount = montant ou quantite
{
    if (amount >= this->_hitP)
    {
        this->_hitP = 0;
        std::cout << "ClapTrap " << _name << " is dead. " << _hitP << " hit points left!" << std::endl;
        return ;
    }
    this->_hitP -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage, " << _hitP << " hit points left!"<< std::endl;
}


// augmente _hitP de la quantite de amount
// ne peut pas se reparer s il est mort ou s il n a plus d energie
// cette action fait perdre un point d energie
void ClapTrap::beRepaired(unsigned int amount) // se reparer
{
    if (this->_hitP > 0 && this->_energyP > 0)
    {
        this->_hitP += amount;
        this->_energyP -= 1;
        std::cout << "ClapTrap " << _name << " recovers " << amount << " hit points, " << _hitP << " hit points left!"<< std::endl;
        return ;
    }
    std::cout << "ClapTrap " << _name << " can't be repaired!" << std::endl;
}

std::ostream& operator<<(std::ostream& out, const ClapTrap& obj)
{
    out << " \"Name\":" << obj.getName();
    out << " \"HitPoints\":" << obj.getHitP();
    out << " \"EnergyPoints\":" << obj.getEnergyP();
    out << " \"AttackDamage\":" << obj.getAttackDamage();
    
    return (out);
}


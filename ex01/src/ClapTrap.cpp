/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:30:22 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/11 10:43:04 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap() : _name(""), _hitP(10), _energyP(10), _attackDamage(0)
{
    std::cout << "ClapTrap Default constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _name(name), _hitP(10), _energyP(10), _attackDamage(0)
{
    std::cout << "ClapTrap " << name << " constructor called!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy)
{
    std::cout << "ClapTrap Copy constructor called!" << std::endl;
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


ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "ClapTrap Assignation operator called!" << std::endl;
    this->_name = other.getName();
    this->_hitP = other.getHitP();
    this->_energyP = other.getEnergyP();
    this->_attackDamage = other.getAttackDamage();
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called!" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_hitP > 0 && this->_energyP > 0)
    {
        std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        this->_energyP -= 1;
        return ;
    }    
    std::cout << "ClapTrap " << _name << " can't attack!" << std::endl;
}


void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_hitP == 0)
    {
        std::cout << "ClapTrap " << _name << " is already dead." << std::endl;
        return ;
    }
    if (amount >= this->_hitP)
    {
        this->_hitP = 0;
        std::cout << "ClapTrap " << _name << " is dead. " << _hitP << " hit points left!" << std::endl;
        return ;
    }
    this->_hitP -= amount;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage, " << _hitP << " hit points left!"<< std::endl;
}


void ClapTrap::beRepaired(unsigned int amount)
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
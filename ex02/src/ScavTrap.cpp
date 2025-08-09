/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:04:04 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/09 14:04:21 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>


ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hitP = 100;
    this->_energyP = 50;
    this->_attackDamage = 20; 
    std::cout << "ScavTrap default constructor called!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hitP = 100;
    this->_energyP = 50;
    this->_attackDamage = 20; 
    std::cout << "ScavTrap " << name << " constructor called!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy) : ClapTrap(copy)
{
    std::cout << "ScavTrap copy constructor called!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
    std::cout << "ScavTrap assignation operator called!" << std::endl;
	this->_name = other._name;
    this->_hitP = other._hitP;
    this->_energyP = other._energyP;
    this->_attackDamage = other._attackDamage;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called!" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode!" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if (this->_hitP > 0 && this->_energyP > 0)
    {
        std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
        this->_energyP -= 1;
        return ;
    }
    std::cout << "ScavTrap " << this->_name << " can't attack!" << std::endl;
}
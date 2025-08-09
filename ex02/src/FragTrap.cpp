/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:04:01 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/09 14:23:46 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
    this->_hitP = 100;
    this->_energyP = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap default constructor called!" << std::endl; 
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hitP = 100;
    this->_energyP = 100;
    this->_attackDamage = 30;
    std::cout << "FragTrap " << name << " constructor called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy) : ClapTrap(copy)
{
    std::cout << "FragTrap " << this->_name << " copy constructor called!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap assignation operator called!" << std::endl;
    this->_name = other._name;
    this->_hitP = other._hitP;
    this->_energyP = other._energyP;
    this->_attackDamage = other._attackDamage;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called!" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->_name << " is asking for a high five!" << std::endl;
}


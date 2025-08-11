/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:30:26 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/11 10:20:26 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap {
    public :
        ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap& copy);
        ClapTrap &operator=(const ClapTrap& other);
        ~ClapTrap();

        std::string getName() const;
        unsigned int getHitP() const;
        unsigned int getEnergyP() const;
        unsigned int getAttackDamage() const;
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    protected :
        std::string _name;
        unsigned int _hitP;
        unsigned int _energyP;
        unsigned int _attackDamage;
        
};

std::ostream& operator<<(std::ostream& out, const ClapTrap& obj);
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:30:26 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/08 14:24:58 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap {
    public :
        ClapTrap();
        ClapTrap(std::string _name);
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
        unsigned int _hitP;// point de vie
        unsigned int _energyP; // point d'energie
        unsigned int _attackDamage; //points de degats
        
};

std::ostream& operator<<(std::ostream& out, const ClapTrap& obj);
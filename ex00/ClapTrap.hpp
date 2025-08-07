/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:23:44 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/07 10:54:27 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class ClapTrap {
    public :
        ClapTrap();
        ClapTrap(const ClapTrap& copy);
        ClapTrap &operator=(const ClapTrap& op);
        ~ClapTrap();

        ClapTrap(std::string _name);
        
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);


    private :
        std::string _name;
        unsigned int _hitP = 10; // point de vie
        unsigned int _energyP = 10; // point d'energie
        unsigned int _damage = 0; //points de degats
        
};
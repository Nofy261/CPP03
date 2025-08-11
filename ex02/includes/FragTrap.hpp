/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:03:51 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/11 10:46:16 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public :
        FragTrap();
        FragTrap(const std::string &name);
        FragTrap(const FragTrap& copy);
        FragTrap &operator=(const FragTrap& other);
        ~FragTrap();

        void highFivesGuys(void);
        
};
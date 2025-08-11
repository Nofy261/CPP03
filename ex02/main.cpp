/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:04:07 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/11 12:39:05 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>


int main()
{
    FragTrap bill("Bill");
    FragTrap jean;
    std::cout << std::endl;
    
    bill.attack("jean");
    std::cout << "bill's value is " << bill << std::endl;
    std::cout << std::endl;
    bill.takeDamage(40);
    bill.takeDamage(60);
    bill.beRepaired(10);
    jean.highFivesGuys();
    std::cout << std::endl;
    std::cout << "-----------------------------" <<std::endl;
    std::cout << std::endl;
    
    ClapTrap ben("Ben");
    ClapTrap bob("Bob");
    std::cout << std::endl;
    
    bob.attack("Ben");
    ben.takeDamage(5);
    ben.beRepaired(1);
    std::cout << "ben's value is " << ben << std::endl;
    std::cout << std::endl;
    std::cout << "-----------------------------" <<std::endl;
    std::cout << std::endl;
    
    ScavTrap sue("Sue");
    ScavTrap blue("Blue");
    std::cout << std::endl;
    
    blue.attack("Sue");
    sue.takeDamage(50);
    sue.beRepaired(50);
    sue.takeDamage(101);
    sue.beRepaired(110);
    sue.guardGate();
    std::cout << std::endl;
    
    return (0);
}

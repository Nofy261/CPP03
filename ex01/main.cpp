/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 13:30:16 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/09 10:48:02 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>


// valeurs negatif a gerer ?

int main()
{
	ClapTrap bob("Bob");
	ClapTrap bill("Bill");
	ClapTrap jack("Jack");
	ScavTrap blue("Blue");
	std::cout << std::endl;
	
	bob.attack("Jean");
	bob.takeDamage(5);
	std::cout << std::endl;
	
	bill.takeDamage(9);
	bill.takeDamage(10);
	std::cout << std::endl;
	
	jack.beRepaired(10);
	jack.takeDamage(19);
	std::cout << std::endl;
	
	blue.attack("Sue");
	blue.takeDamage(99);
	blue.beRepaired(50);
	blue.guardGate();
	std::cout << std::endl;
}

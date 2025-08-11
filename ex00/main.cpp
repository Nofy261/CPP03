/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:23:47 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/11 12:40:26 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("Bob");
    ClapTrap b; 
    ClapTrap c(a);
    std::cout << std::endl;
    
    std::cout << "Values of " << a << std::endl;
    std::cout << "Values of " << b << std::endl;
    std::cout << "Values of " << c << std::endl;
    std::cout << std::endl;
    
    a.attack("Bill");
    a.takeDamage(5);
    a.beRepaired(4);
    std::cout << std::endl;
    
    b.attack("Blue");
    b.takeDamage(2);
    b.beRepaired(3);
    std::cout << std::endl;

    c.takeDamage(11);
    c.attack("John");
    c.takeDamage(1);
    c.beRepaired(1);
    std::cout << std::endl;
    
    return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 14:23:47 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/08 13:13:37 by nolecler         ###   ########.fr       */
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
    b.takeDamage(2); // a gerer les negatif??
    b.beRepaired(3); // a gerer les negatif??
    std::cout << std::endl;
    
    return (0);
}

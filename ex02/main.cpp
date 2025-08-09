/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolecler <nolecler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:04:07 by nolecler          #+#    #+#             */
/*   Updated: 2025/08/09 14:38:32 by nolecler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp" // test fait dans le precedent
#include "FragTrap.hpp"
#include <iostream>

// int main()
// {
//     FragTrap a;
//     std::cout << std::endl;
//     ScavTrap b;
//     std::cout << std::endl;
//     ClapTrap c;
//     std::cout << std::endl;

//     return (0);
// }


int main()
{
    FragTrap lili("Bob");

    std::cout << "\nTesting highFivesGuys()" << std::endl;
    lili.highFivesGuys();

    std::cout << "\nTesting copy constructor" << std::endl;
    FragTrap copy(lili);

    std::cout << "\nTesting assignment operator" << std::endl;
    FragTrap Bill;
    Bill = lili;

    std::cout << std::endl;
    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:47 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/25 19:23:37 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COLORS_HPP
# define COLORS_HPP
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define CYAN "\033[0;36m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define UNDERLINE "\033[4m"
# define REVERSE "\033[7m"

#include "DiamondTrap.hpp"

int main() {
    FragTrap yo("yo");
    FragTrap tu("tu");
    FragTrap el;
    DiamondTrap aquel;
    DiamondTrap este(aquel);
    DiamondTrap otro("hola");
    std::cout << "---------------------------" << std::endl;
    
    std::cout << YELLOW << "[DiamondTrap][" << otro.getName() << "] has " << otro.getHitpoints() << " hitpoints, " << otro.getEnergyPoints() << " energyPoints and " << otro.getAttackDamage() << " atackDamage" << RESET << std::endl;
    std::cout << GREEN << "[FragTrap][" << yo.getName() << "] has " << yo.getHitpoints() << " hitpoints" << RESET << std::endl;
    std::cout << YELLOW << "[DiamondTrap][" << otro.getName() << "] has " << otro.getHitpoints() << " hitpoints" << RESET << std::endl;
    std::cout << GREEN << "[FragTrap][" << tu.getName() << "] has " << tu.getEnergyPoints() << " energyPoints" << RESET << std::endl;
    std::cout << GREEN << "[FragTrap][" << el.getName() << "] has " << el.getAttackDamage() << " atackDamage" << RESET << std::endl;
    std::cout << YELLOW << "[DiamondTrap][" << aquel.getName() << "] has " << aquel.getAttackDamage() << " atackDamage" << RESET << std::endl;
    std::cout << YELLOW << "[DiamondTrap][" << este.getName() << "] has " << este.getAttackDamage() << " atackDamage" << RESET << std::endl;
    std::cout << "---------------------------" << std::endl;

    yo.attack("tu");
    tu.takeDamage(4);
    otro.beRepaired(3);
    el.takeDamage(6);
    aquel.attack("este");
    este.highFiveGuys();
    otro.whoAmI();
    std::cout << "---------------------------" << std::endl;

    return 0;
}

#endif

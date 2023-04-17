/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:47 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/17 20:09:46 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap yo("yo");
    ScavTrap tu("tu");
    ScavTrap el;
    ScavTrap otro(yo);
    ScavTrap aquel = el;

    std::cout << "---------------------------" << std::endl;
    std::cout << BLUE << "[ScavTrap][" << otro.getName() << "] has " << otro.getHitpoints() << " hitpoints, " << otro.getEnergyPoints() << " energyPoints and " << otro.getAtackDamage() << " atackDamage" << RESET << std::endl;
    std::cout << BLUE << "[ScavTrap][" << yo.getName() << "] has " << yo.getHitpoints() << " hitpoints" << RESET << std::endl;
    std::cout << BLUE << "[ScavTrap][" << otro.getName() << "] has " << otro.getHitpoints() << " hitpoints" << RESET << std::endl;
    std::cout << BLUE << "[ScavTrap][" << tu.getName() << "] has " << tu.getEnergyPoints() << " energyPoints" << RESET << std::endl;
    std::cout << BLUE << "[ScavTrap][" << el.getName() << "] has " << el.getAtackDamage() << " atackDamage" << RESET << std::endl;
    std::cout << BLUE << "[ScavTrap][" << aquel.getName() << "] has " << aquel.getAtackDamage() << " atackDamage" << RESET << std::endl;
    std::cout << "---------------------------" << std::endl;

    yo.attack("tu");
    tu.takeDamage(4);
    tu.beRepaired(3);
    el.takeDamage(6);
    el.attack("yo");
    std::cout << "---------------------------" << std::endl;

    return 0;
}

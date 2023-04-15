/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:47 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/15 20:34:01 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap yo("yo");
    ScavTrap tu("tu");
    ScavTrap el;
    ScavTrap otro(yo);

    std::cout << "---------------------------" << std::endl;
    std::cout << "OTRO has: " << otro.getHitpoints() << " hitpoints, " << otro.getEnergyPoints() << " energyPoints, " << otro.getAtackDamage() << " atackDamage, " << std::endl;
    std::cout << BLUE << "[Scavtrap][" << yo.getName() << "] has " << yo.getHitpoints() << " hitpoints" << RESET << std::endl;
    std::cout << BLUE << "[Scavtrap][" << otro.getName() << "] has " << otro.getHitpoints() << " hitpoints" << RESET << std::endl;
    std::cout << BLUE << "[Scavtrap][" << tu.getName() << "] has " << tu.getEnergyPoints() << " energyPoints" << RESET << std::endl;
    std::cout << BLUE << "[Scavtrap][" << el.getName() << "] has " << el.getAtackDamage() << " atackDamage" << RESET << std::endl;
    std::cout << "---------------------------" << std::endl;

    yo.attack("tu");
    tu.takeDamage(4);
    tu.beRepaired(3);
    el.takeDamage(6);
    el.attack("yo");
    std::cout << "---------------------------" << std::endl;

    return 0;
}

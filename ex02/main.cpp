/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:47 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/19 21:10:44 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap yo("yo");
    FragTrap tu("tu");
    FragTrap el;
    FragTrap otro(yo);
    FragTrap aquel = el;
    std::cout << "---------------------------" << std::endl;

    std::cout << GREEN << "[FragTrap][" << otro.getName() << "] has " << otro.getHitpoints() << " hitpoints, " << otro.getEnergyPoints() << " energyPoints and " << otro.getAtackDamage() << " atackDamage" << RESET << std::endl;
    std::cout << GREEN << "[FragTrap][" << yo.getName() << "] has " << yo.getHitpoints() << " hitpoints" << RESET << std::endl;
    std::cout << GREEN << "[FragTrap][" << otro.getName() << "] has " << otro.getHitpoints() << " hitpoints" << RESET << std::endl;
    std::cout << GREEN << "[FragTrap][" << tu.getName() << "] has " << tu.getEnergyPoints() << " energyPoints" << RESET << std::endl;
    std::cout << GREEN << "[FragTrap][" << el.getName() << "] has " << el.getAtackDamage() << " atackDamage" << RESET << std::endl;
    std::cout << GREEN << "[FragTrap][" << aquel.getName() << "] has " << aquel.getAtackDamage() << " atackDamage" << RESET << std::endl;
    std::cout << "---------------------------" << std::endl;

    yo.attack("tu");
    tu.takeDamage(4);
    tu.beRepaired(3);
    el.takeDamage(6);
    el.attack("yo");
    std::cout << "---------------------------" << std::endl;

    return 0;
}

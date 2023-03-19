/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:47 by lvarela           #+#    #+#             */
/*   Updated: 2023/03/19 14:34:01 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    ScavTrap yo("yo");
    ScavTrap tu("tu");
    ScavTrap el;

    std::cout << "yo has " << yo.getHitpoints() << " hitpoints" << std::endl;
    std::cout << "tu has " << tu.getEnergyPoints() << " hitpoints" << std::endl;
    std::cout << "el has " << el.getAatackDamage() << " hitpoints" << std::endl;

    yo.attack("tu");
    tu.takeDamage(4);
    tu.beRepaired(3);
    el.takeDamage(6);
    el.attack("yo");

    return 0;
}

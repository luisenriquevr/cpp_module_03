/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:47 by lvarela           #+#    #+#             */
/*   Updated: 2023/03/19 13:20:11 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main() {
    FragTrap yo("yo");
    FragTrap tu("tu");
    FragTrap el;

    std::cout << "yo has " << yo.getHitpoints() << " hitpoints" << std::endl;
    std::cout << "tu has " << tu.getEnergyPoints() << " hitpoints" << std::endl;
    std::cout << "el has " << el.getAatackDamage() << " hitpoints" << std::endl;

    yo.attack("tu");
    tu.takeDamage(4);
    tu.beRepaired(3);
    el.takeDamage(6);
    el.attack("yo");
    yo.highFiveGuys();

    return 0;
}

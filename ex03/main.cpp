/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:47 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/17 20:08:58 by lvarela          ###   ########.fr       */
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
    

    std::cout << "yo has " << yo.getHitpoints() << " hitpoints" << std::endl;
    std::cout << "tu has " << tu.getEnergyPoints() << " hitpoints" << std::endl;
    std::cout << "el has " << el.getAtackDamage() << " hitpoints" << std::endl;
    std::cout << "aquel has " << aquel.getAtackDamage() << " hitpoints" << std::endl;
    std::cout << "este has " << este.getAtackDamage() << " hitpoints" << std::endl;
    std::cout << "otro has " << otro.getAtackDamage() << " hitpoints" << std::endl;

    yo.attack("tu");
    tu.takeDamage(4);
    otro.beRepaired(3);
    el.takeDamage(6);
    aquel.attack("este");
    este.highFiveGuys();
    otro.whoAmI();

    return 0;
}

#endif

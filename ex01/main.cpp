/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:47 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/26 20:08:23 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main() {
    std::cout << "---- Name constructor -------------" << std::endl;
    ScavTrap yo("yo");
    ScavTrap tu("tu");

    std::cout << "---- Default constructor ----------" << std::endl;
    ScavTrap el;

    std::cout << "---- Copy constructor -------------" << std::endl;
    ScavTrap nosotros(yo);

    std::cout << "---- Assigned copy constructor ----" << std::endl;
    ScavTrap vosotros;
    vosotros = tu;

    std::cout << "---- Values -----------------------" << std::endl;
    std::cout << yo;
    std::cout << tu;
    std::cout << el;
    std::cout << nosotros;
    std::cout << vosotros;

    std::cout << "---- Methods ----------------------" << std::endl;
    yo.attack("tu");
    tu.takeDamage(0);
    tu.beRepaired(0);
    el.attack("vosotros");
    vosotros.takeDamage(0);
    yo.guardGate();

    std::cout << "---- New values -------------------" << std::endl;
    std::cout << yo;
    std::cout << tu;
    std::cout << el;
    std::cout << nosotros;
    std::cout << vosotros;

    std::cout << "-----------------------------------" << std::endl;

    return 0;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:55:08 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/23 20:44:47 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main() {
    std::cout << "---- Name constructor -------------" << std::endl;
    ClapTrap yo("yo");
    ClapTrap tu("tu");

    std::cout << "---- Default constructor ----------" << std::endl;
    ClapTrap el;

    std::cout << "---- Copy constructor -------------" << std::endl;
    ClapTrap nosotros(yo);

    std::cout << "---- Assigned copy constructor ----" << std::endl;
    ClapTrap vosotros;
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

    std::cout << "---- New values -------------------" << std::endl;
    std::cout << yo;
    std::cout << tu;
    std::cout << el;
    std::cout << nosotros;
    std::cout << vosotros;

    std::cout << "-----------------------------------" << std::endl;

    return 0;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:55:08 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/29 20:47:19 by lvarela          ###   ########.fr       */
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
    tu.takeDamage(yo.getAttackDamage());
    tu.beRepaired(0);
    el.attack("vosotros");
    vosotros.takeDamage(el.getAttackDamage());

    std::cout << "---- New values -------------------" << std::endl;
    std::cout << yo;
    std::cout << tu;
    std::cout << el;
    std::cout << nosotros;
    std::cout << vosotros;

    std::cout << "-----------------------------------" << std::endl;

    return 0;
}

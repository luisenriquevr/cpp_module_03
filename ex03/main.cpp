/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:47 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/03 15:39:49 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main() {
    std::cout << "---- Name constructor -------------" << std::endl;
    ClapTrap yo("yo");
    ScavTrap tu("tu");
    FragTrap el("el");
    DiamondTrap otro("hola");

    std::cout << "---- Values -----------------------" << std::endl;
    std::cout << yo;
    std::cout << tu;
    std::cout << el;
    std::cout << otro;

    std::cout << "---- Default constructor ----------" << std::endl;
    ClapTrap nosotros;
    ScavTrap vosotros;
    FragTrap ellos;
    DiamondTrap otros;

    std::cout << "---- Values -----------------------" << std::endl;
    std::cout << nosotros;
    std::cout << vosotros;
    std::cout << ellos;
    std::cout << otros;

    std::cout << "---- Copy constructor -------------" << std::endl;
    ClapTrap yo2(yo);
    ScavTrap tu2(tu);
    FragTrap el2(el);
    DiamondTrap otro2(otro);

    std::cout << "---- Values -----------------------" << std::endl;
    std::cout << yo2;
    std::cout << tu2;
    std::cout << el2;
    std::cout << otro2;

    std::cout << "---- Assigned copy constructor ----" << std::endl;
    ClapTrap nosotros2;
    nosotros2 = nosotros;
    ScavTrap vosotros2;
    vosotros2 = vosotros;
    FragTrap ellos2;
    ellos2 = ellos;
    DiamondTrap otros2;
    otros2 = otros;

    std::cout << "---- Values -----------------------" << std::endl;
    std::cout << nosotros2;
    std::cout << vosotros2;
    std::cout << ellos2;
    std::cout << otros2;

    std::cout << "---- Methods ----------------------" << std::endl;
    yo.attack("tu");
    tu.takeDamage(yo.getAttackDamage());
    tu.beRepaired(3);
    el.attack("otro");
    otro.takeDamage(el.getAttackDamage());
    ellos.highFiveGuys();
    vosotros.guardGate();
    otro2.whoAmI();
    
    std::cout << "---- Values -----------------------" << std::endl;
    std::cout << yo;
    std::cout << tu;
    std::cout << el;
    std::cout << otro;
    std::cout << ellos;
    std::cout << vosotros;

    std::cout << "-----------------------------------" << std::endl;
    return 0;
}

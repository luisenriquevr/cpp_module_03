/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:55:08 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/19 22:04:38 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"

int main() {
    ClapTrap yo("yo");
    ClapTrap tu("tu");
    ClapTrap el;
    std::cout << "---------------------------" << std::endl;

    std::cout << yo;
    std::cout << "---------------------------" << std::endl;

    yo.attack("tu");
    tu.takeDamage(4);
    tu.beRepaired(3);
    el.attack("yo");
    std::cout << "---------------------------" << std::endl;

    return 0;
}

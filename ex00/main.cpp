/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:55:08 by lvarela           #+#    #+#             */
/*   Updated: 2023/03/19 13:20:07 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main() {
    ClapTrap yo("yo");
    ClapTrap tu("tu");
    ClapTrap el;

    yo.attack("tu");
    tu.takeDamage(4);
    tu.beRepaired(3);
    el.attack("yo");

    return 0;
}

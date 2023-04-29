/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:32:17 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/29 21:33:13 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
   protected:
    static const unsigned int _base_hitPoints = 100;
    static const unsigned int _base_energyPoints = 100;
    static const unsigned int _base_attackDamage = 30;

   public:
    FragTrap();
    FragTrap(const std::string name);
    FragTrap(const FragTrap &toCopy);
    FragTrap &operator=(const FragTrap &toCopy);
    virtual ~FragTrap();

    void attack(const std::string &target);
    void highFiveGuys();
};

std::ostream &operator<<(std::ostream &COUT, const FragTrap &FragTrap);

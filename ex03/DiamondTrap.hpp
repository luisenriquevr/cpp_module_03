/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:57:08 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/29 17:34:07 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : virtual public ScavTrap, virtual public FragTrap {
   private:
    const std::string _name;

   public:
    DiamondTrap();
    DiamondTrap(const std::string _name);
    DiamondTrap(const DiamondTrap &toCopy);
    DiamondTrap &operator=(const DiamondTrap &toCopy);
    ~DiamondTrap();

    void attack(const std::string &target);
    void whoAmI();
    std::string getName() const;
};

std::ostream &operator<<(std::ostream &COUT, const DiamondTrap &DiamondTrap);
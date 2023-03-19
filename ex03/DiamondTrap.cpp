/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:57:08 by lvarela           #+#    #+#             */
/*   Updated: 2023/03/19 13:20:10 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {
   private:
    const std::string _name;

   public:
    DiamondTrap();
    DiamondTrap(const std::string _name);
    DiamondTrap(const DiamondTrap &toCopy);
    DiamondTrap &operator=(DiamondTrap &toCopy);
    ~DiamondTrap();

    void attack(const std::string &target);
    void whoAmI();
};

#endif

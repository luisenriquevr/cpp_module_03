/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 21:57:08 by lvarela           #+#    #+#             */
/*   Updated: 2023/03/13 22:28:56 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

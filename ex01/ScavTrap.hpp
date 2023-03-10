/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:15 by lvarela           #+#    #+#             */
/*   Updated: 2023/03/13 19:35:20 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    private:

    public:
        ScavTrap();
        ScavTrap(const std::string name);
        ScavTrap(const ScavTrap &toCopy);
        ScavTrap &operator=(const ScavTrap &toCopy);
        ~ScavTrap();

        void attack(const std::string &target);
        void guardGate();
};

std::ostream &operator<<(std::ostream &COUT, const ScavTrap &scavTrap);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:15 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/25 18:56:45 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
   private:
    bool    _gateMode;
   public:
    ScavTrap();
    explicit ScavTrap(const std::string name);
    ScavTrap(const ScavTrap &toCopy);
    virtual ~ScavTrap();

    ScavTrap &operator=(const ScavTrap &toCopy);

    void attack(const std::string &target);
    bool getGateMode() const;
    void guardGate();

};

std::ostream &operator<<(std::ostream &COUT, const ScavTrap &ScavTrap);

#endif

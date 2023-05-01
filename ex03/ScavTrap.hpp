/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:15 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/01 15:04:16 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
   private:
    bool    _gateMode;

   protected:
    static const unsigned int _base_hitPoints = 100;
    static const unsigned int _base_energyPoints = 50;
    static const unsigned int _base_attackDamage = 20;

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

std::ostream    &operator<<(std::ostream &COUT, const ScavTrap &ScavTrap);


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:15 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/19 22:29:19 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

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

    friend std::ostream &operator<<(std::ostream &COUT, const ScavTrap &ScavTrap);
};


#endif

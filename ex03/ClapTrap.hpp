/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:43 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/17 20:07:53 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef ClapTrap_HPP
#define ClapTrap_HPP

# include <iostream>

class ClapTrap {
   protected:
    std::string _name;
    unsigned int _hitPoints;
    unsigned int _energyPoints;
    unsigned int _attackDamage;

   public:
    ClapTrap();
    ClapTrap(const std::string name);
    ClapTrap(const ClapTrap &toCopy);
    ClapTrap &operator=(const ClapTrap &toCopy);
    ~ClapTrap();

    void setName(const std::string name);
    void setHitpoints(unsigned int hitpoints);
    void setEnergyPoints(unsigned int energyPoints);
    void setAttackDamage(unsigned int atackDamage);

    std::string getName() const;
    unsigned int getHitpoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAtackDamage() const;

    void attack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

std::ostream &operator<<(std::ostream &COUT, const ClapTrap &ClapTrap);

#endif

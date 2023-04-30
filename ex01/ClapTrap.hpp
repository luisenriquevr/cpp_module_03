/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:55:06 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/01 00:18:44 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef COLORS_HPP
# define COLORS_HPP
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define BLUE "\033[0;34m"
# define MAGENTA "\033[0;35m"
# define CYAN "\033[0;36m"
# define RESET "\033[0m"
# define BOLD "\033[1m"
# define UNDERLINE "\033[4m"
# define REVERSE "\033[7m"
#endif

#include <iostream>

class ClapTrap {
   private:
    static const unsigned int _base_hitPoints = 10;
    static const unsigned int _base_energyPoints = 10;
    static const unsigned int _base_attackDamage = 0;

   protected:
    std::string     _name;
    unsigned int    _hitPoints;
    unsigned int    _energyPoints;
    unsigned int    _attackDamage;

   public:
    ClapTrap();
    explicit ClapTrap(const std::string &name);
    ClapTrap(const ClapTrap &toCopy);
    ClapTrap &operator=(const ClapTrap &toCopy);
    virtual ~ClapTrap();

    void setName(const std::string name);
    void setHitpoints(unsigned int hitpoints);
    void setEnergyPoints(unsigned int energyPoints);
    void setAttackDamage(unsigned int atackDamage);

    std::string getName() const;
    unsigned int getHitpoints() const;
    unsigned int getEnergyPoints() const;
    unsigned int getAttackDamage() const;

    void attack(const std::string &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);

};

std::ostream &operator<<(std::ostream &COUT, const ClapTrap &ClapTrap);

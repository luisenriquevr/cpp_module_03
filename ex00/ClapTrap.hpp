#pragma once

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
    private:
        std::string _name;
        unsigned int _hitpoints;
        unsigned int _energyPoints;
        unsigned int _attackDamage;

    public:
        ClapTrap();
        ClapTrap(const std::string name);
        ClapTrap(const ClapTrap &toCopy);
        ClapTrap &operator=(const ClapTrap &toCopy);
        ~ClapTrap();

        void attack(std::string const &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        void setName(const std::string name);
        void setHitpoints(unsigned int hitpoints);
        void setEnergyPoints(unsigned int energyPoints);
        void setAttackDamage(unsigned int atackDamage);

        std::string ClapTrap::getName();
        const unsigned int ClapTrap::getAtackDamage();
        const unsigned int ClapTrap::getEnergyPoints();
        const unsigned int ClapTrap::attackDamage();
};




#endif
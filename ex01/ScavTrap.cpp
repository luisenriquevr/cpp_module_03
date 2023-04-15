/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:31 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/15 20:33:48 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << BLUE << "[ScavTrap][unnamed] Default constructor called" << RESET << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << BLUE << "[ScavTrap][" << name << "] Name constructor called" << RESET << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy) {
    std::cout << BLUE << "[ScavTrap][" << this->_name << "] Copy constructor called" << RESET << std::endl;
}


ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy) {
    std::cout << BLUE << "[Scavtrap][" << toCopy._name << "] Assigned constructor called" << RESET << std::endl;
    if (this != &toCopy) {
        this->_name = toCopy._name;
        this->_hitPoints = toCopy._hitPoints;
        this->_energyPoints = toCopy._energyPoints;
        this->_attackDamage = toCopy._attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << BLUE << "[Scavtrap][" << this->_name << "] Destructor called" << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << BLUE << "[Scavtrap][" << this->getName() << "] attacks [" << target << "], causing " << this->getAtackDamage() << " points of damage!" << RESET<< std::endl;
}

void ScavTrap::guardGate() {
    std::cout << BLUE << "[Scavtrap][" << this->_name << "] enterred in Gate keeper mode" << RESET << std::endl;
}

std::ostream &operator<<(std::ostream &COUT, const ScavTrap &scavTrap) {
    COUT << scavTrap.getName();
    return COUT;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:31 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/29 21:10:14 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_hitPoints = this->_base_hitPoints;
    this->_energyPoints = this->_base_energyPoints;
    this->_attackDamage = this->_base_attackDamage;
    this->_gateMode = false;
    std::cout << BLUE << "[ScavTrap][unnamed] Default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name) {
    this->_hitPoints = this->_base_hitPoints;
    this->_energyPoints = this->_base_energyPoints;
    this->_attackDamage = this->_base_attackDamage;
    this->_gateMode = false;
    std::cout << BLUE << "[ScavTrap][" << name << "] Name constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy) {
    std::cout << BLUE << "[ScavTrap][" << this->_name << "] Copy constructor called" << RESET << std::endl;
}

ScavTrap::~ScavTrap() {
    std::cout << BLUE << "[ScavTrap][" << this->_name << "] Destructor called" << RESET << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy) {
    if (this != &toCopy) {
        this->_name = toCopy._name;
        this->_hitPoints = toCopy._hitPoints;
        this->_energyPoints = toCopy._energyPoints;
        this->_attackDamage = toCopy._attackDamage;
    }
    std::cout << BLUE << "[ScavTrap][" << toCopy._name << "] Assigned constructor called" << RESET << std::endl;
    return *this;
}

void    ScavTrap::attack(const std::string &target) {
    if (this->_energyPoints)
        std::cout << BLUE << "[ScavTrap][" << this->_name << "] attacks [" << target << "], causing " << this->getAttackDamage() << " points of damage!" << RESET << std::endl;
    else
        std::cout << BLUE << "[ScavTrap][" << this->_name << "] can not attack " << target << ", is dead." << RESET << std::endl;
}

bool    ScavTrap::getGateMode() const {
    return this->_gateMode;
}

void    ScavTrap::guardGate() {
    if (this->_energyPoints) {
        if (!this->_gateMode) {
            this->_gateMode = true;
            std::cout << BLUE << "[ScavTrap][" << this->_name << "] is now in Gate keeper mode ON" << RESET << std::endl;
        }
        else {
            this->_gateMode = false;
            std::cout << BLUE << "[ScavTrap][" << this->_name << "] is now in Gate keeper mode OFF" << RESET << std::endl;
        }
    }
    else
        std::cout << BLUE << "[ScavTrap][" << this->_name << "] can not be in Gate keeper mode, is dead." << RESET << std::endl;
}

std::ostream &operator<<(std::ostream &COUT, const ScavTrap &ScavTrap) {
    COUT << BLUE << "[ScavTrap] " << "Name: " << ScavTrap.getName() << " HP: " << ScavTrap.getHitpoints()
		<< " EP: " << ScavTrap.getEnergyPoints() << " Attack Damage: " << ScavTrap.getAttackDamage()
        << " Gate Mode: " << ScavTrap.getGateMode() << RESET << std::endl;
    return COUT;
}

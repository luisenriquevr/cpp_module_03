/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:31 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/19 22:28:38 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << BLUE << "[ScavTrap][unnamed] Default constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
    std::cout << BLUE << "[ScavTrap][" << name << "] Name constructor called" << RESET << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy) {
    std::cout << BLUE << "[ScavTrap][" << this->_name << "] Copy constructor called" << RESET << std::endl;
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

ScavTrap::~ScavTrap() {
    std::cout << BLUE << "[ScavTrap][" << this->_name << "] Destructor called" << RESET << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << BLUE << "[ScavTrap][" << this->getName() << "] attacks [" << target << "], causing " << this->getAtackDamage() << " points of damage!" << RESET<< std::endl;
}

void ScavTrap::guardGate() {
    std::cout << BLUE << "[ScavTrap][" << this->_name << "] enterred in Gate keeper mode" << RESET << std::endl;
}

std::ostream &operator<<(std::ostream &COUT, const ScavTrap &ScavTrap) {
    COUT << BLUE << "[ScavTrap] " <<  "Name: " << ScavTrap._name << " HP: " << ScavTrap._hitPoints
		<< " EP: " << ScavTrap._energyPoints << " Attack Damage: " << ScavTrap._attackDamage << RESET <<std::endl;
    return COUT;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:31 by lvarela           #+#    #+#             */
/*   Updated: 2023/03/19 14:34:02 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    std::cout << "ScavTrap default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
    std::cout << "ScavTrap name constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 50;
    this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &toCopy) : ClapTrap(toCopy) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &toCopy) {
    std::cout << "ScavTrap assigned constructor called" << std::endl;
    if (this != &toCopy) {
        (std::string) this->_name = (std::string)toCopy._name;
        this->_hitPoints = toCopy._hitPoints;
        this->_energyPoints = toCopy._energyPoints;
        this->_attackDamage = toCopy._attackDamage;
    }
    return *this;
}

ScavTrap::~ScavTrap() {
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target) {
    std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing " << this->getAatackDamage() << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
    std::cout << "ScavTrap " << this->_name << " enterred in Gate keeper mode" << std::endl;
}

std::ostream &operator<<(std::ostream &COUT, const ScavTrap &scavTrap) {
    COUT << scavTrap.getName();
    return COUT;
}

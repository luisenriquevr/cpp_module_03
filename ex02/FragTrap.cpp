/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:20:58 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/03 15:45:04 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->_hitPoints = this->_base_hitPoints;
    this->_energyPoints = this->_base_energyPoints;
    this->_attackDamage = this->_base_attackDamage;
    std::cout << GREEN << "[FragTrap][unnamed] Default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
    this->_hitPoints = this->_base_hitPoints;
    this->_energyPoints = this->_base_energyPoints;
    this->_attackDamage = this->_base_attackDamage;
    std::cout << GREEN << "[FragTrap][" << name << "] Name constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy) {
    std::cout << GREEN << "[Fragtrap][" << this->_name <<  "] Copy constructor called" << RESET << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &toCopy) {
    if (this != &toCopy) {
        (std::string) this->_name = (std::string)toCopy._name;
        this->_hitPoints = toCopy._hitPoints;
        this->_energyPoints = toCopy._energyPoints;
        this->_attackDamage = toCopy._attackDamage;
    }
    std::cout << GREEN << "[FragTrap][" << toCopy._name <<  "] Assigned constructor called" << RESET << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << GREEN << "[FragTrap][" << _name << "] Destructor called" << RESET << std::endl;
}

void FragTrap::attack(const std::string &target) {
    if (this->_energyPoints)
        std::cout << GREEN << "[FragTrap][" << this->getName() << "] attacks [" << target << "], causing " << this->getAttackDamage() << " points of damage!" << RESET<< std::endl;
    else
        std::cout << GREEN << "[FragTrap][" << this->getName() << "] can not attack [" << target << "], is dead" << RESET<< std::endl;
}

void FragTrap::highFiveGuys() {
    if (this->_energyPoints)
        std::cout << GREEN << "[FragTrap][" << this->_name << "] request a mega high fives" << RESET << std::endl;
    else
        std::cout << GREEN << "[FragTrap][" << this->_name << "] can not request a mega high fives, is dead" << RESET << std::endl;
}

std::ostream    &operator<<(std::ostream &COUT, const FragTrap &FragTrap) {
    COUT << GREEN << "[FragTrap] " << "Name: " << FragTrap.getName() << " HP: " << FragTrap.getHitpoints()
		<< " EP: " << FragTrap.getEnergyPoints() << " Attack Damage: " << FragTrap.getAttackDamage() << RESET <<std::endl;
    return COUT;
}

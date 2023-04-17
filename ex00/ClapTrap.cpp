/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:55:03 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/17 20:07:53 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << RED << "[ClapTrap][unnamed] Default constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << RED << "[ClapTrap][" << name <<  "] Name constructor called" << RESET << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy) {
    *this = toCopy;
    std::cout << RED << "[ClapTrap][" << this->_name <<  "] Copy constructor called" << RESET << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy) {
    if (this != &toCopy) {
        this->_name = toCopy._name;
        this->_hitPoints = toCopy._hitPoints;
        this->_energyPoints = toCopy._energyPoints;
        this->_attackDamage = toCopy._attackDamage;
    }
    std::cout << RED << "[ClapTrap][" << toCopy._name <<  "] Assigned constructor called" << RESET << std::endl;
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << RED << "[ClapTrap][" << _name << "] Destructor called" << RESET << std::endl;
}

void ClapTrap::setHitpoints(unsigned int hitpoints) {
    this->_hitPoints = hitpoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints) {
    this->_energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int atackDamage) {
    this->_attackDamage = atackDamage;
}

std::string ClapTrap::getName() const {
    return this->_name;
}

unsigned int ClapTrap::getHitpoints() const {
    return this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
    return this->_energyPoints;
}

unsigned int ClapTrap::getAtackDamage() const {
    return this->_attackDamage;
}

void ClapTrap::attack(const std::string &target) {
    std::cout << RED << "[ClapTrap][" << this->getName() << "] attacks " << target << ", causing " << this->getAtackDamage() << " points of damage!" << RESET << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << RED << "[ClapTrap][" << this->getName() << "] takes " << amount << " points of damage." << RESET << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << RED << "[ClapTrap][" << this->getName() << "] repairs " << amount << " points of damage." << RESET << std::endl;
}

std::ostream &operator<<(std::ostream &COUT, const ClapTrap &ClapTrap) {
    COUT << ClapTrap.getName();
    return COUT;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 11:54:40 by lvarela           #+#    #+#             */
/*   Updated: 2023/03/12 12:16:35 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("unnamed"), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Name constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = toCopy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy) {
    std::cout << "Assigned constructor called" << std::endl;
    if (this != &toCopy) {
        (std::string) this->_name = (std::string) toCopy._name;
        this->_hitPoints = toCopy._hitPoints;
        this->_energyPoints = toCopy._energyPoints;
        this->_attackDamage = toCopy._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
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

std::string ClapTrap::getName() {
    return this->_name;
}

unsigned int  ClapTrap::getHitpoints() {
    return (int)this->_hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() {
    return (int)this->_energyPoints;
}

unsigned int ClapTrap::getAatackDamage() {
    return (int)this->_attackDamage;
}

void ClapTrap::attack(std::string const &target) {
    std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing " << this->getAatackDamage() << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
    std::cout << "Claptrap " << this->getName() << " takes " << amount << " points of damage." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
    std::cout << "Claptrap " << this->getName() << " repairs " << amount << " points of damage." << std::endl;
}
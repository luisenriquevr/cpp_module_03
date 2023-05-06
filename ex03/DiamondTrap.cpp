/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:40:22 by lvarela           #+#    #+#             */
/*   Updated: 2023/05/06 18:33:45 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unnamed_clap_name"), ScavTrap(), FragTrap() {
	this->_hitPoints = this->FragTrap::_base_hitPoints;
	this->_energyPoints = this->ScavTrap::_base_energyPoints;
	this->_attackDamage = this->FragTrap::_base_attackDamage;
    std::cout << YELLOW << "[DiamondTrap][unnamed] Default constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name) {
	this->_hitPoints = this->FragTrap::_base_hitPoints;
	this->_energyPoints = this->ScavTrap::_base_energyPoints;
	this->_attackDamage = this->FragTrap::_base_attackDamage;
    std::cout << YELLOW << "[DiamondTrap][" << this->_name << "] Name constructor called" << RESET << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy) : ClapTrap(toCopy), _name(toCopy._name) {
    std::cout << YELLOW << "[Diamondtrap][" << this->_name <<  "] Copy constructor called" << RESET << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &toCopy) {
	if (this != &toCopy) {
		(std::string)this->_name = (std::string)toCopy._name;
		this->_hitPoints = toCopy._hitPoints;
		this->_energyPoints = toCopy._energyPoints;
		this->_attackDamage = toCopy._attackDamage;
	}
	std::cout << this->getName() << " DiamondTrap assigned constructor called" << std::endl;
	return *this;
}

DiamondTrap::~DiamondTrap() {
    std::cout << YELLOW << "[DiamondTrap][" << this->_name << "] Destructor called" << RESET << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
	std::cout << YELLOW << "[DiamondTrap][" << this->getName() << "] attacks [" << target << "], causing " << this->getAttackDamage() << " points of damage!" << RESET<< std::endl;
}

void DiamondTrap::whoAmI() {
	if (this->_hitPoints <= 0)
		std::cout << YELLOW << "[DiamondTrap][" << this->_name << "] is dead" << RESET << std::endl;
	else {
		std::cout << YELLOW << "[DiamondTrap] name is [" << this->_name << "]" << RESET << std::endl;
		std::cout << YELLOW << "[SubCTrap] name is [" << ClapTrap::getName() << "]" << RESET << std::endl;
	}
}

std::string	DiamondTrap::getName() const {
	return this->_name;
}

std::ostream    &operator<<(std::ostream &COUT, const DiamondTrap &DiamondTrap) {
    COUT << YELLOW << "[DiamondTrap] " << "Name: " << DiamondTrap.getName() << " HP: " << DiamondTrap.getHitpoints()
		<< " EP: " << DiamondTrap.getEnergyPoints() << " Attack Damage: " << DiamondTrap.getAttackDamage() << std::endl
		<< "[DiamondTrap]" << RED << "[ClapTrap] " << "Name: " << DiamondTrap.ClapTrap::getName() << " HP: " << DiamondTrap.ClapTrap::getHitpoints()
		<< " EP: " << DiamondTrap.ClapTrap::getEnergyPoints() << " Attack Damage: " << DiamondTrap.ClapTrap::getAttackDamage() << RESET << std::endl; 
    return COUT;
}

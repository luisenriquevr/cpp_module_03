/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/19 13:40:22 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/17 20:08:58 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("unnamed_clap_name") {
	std::cout << "unnamed_clap_name " << " DiamondTrap default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : ClapTrap(name + "_clap_name"), _name(name) {
	this->_hitPoints = FragTrap::_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << name << "  DiamondTrap name constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &toCopy) {
    std::cout << toCopy.getName() << " DiamondTrap Copy constructor called" << std::endl;
    *this = toCopy;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &toCopy) {
	std::cout << toCopy.getName() << " DiamondTrap assigned constructor called" << std::endl;
	if (this != &toCopy) {
		(std::string)this->_name = (std::string)toCopy._name;
		this->_hitPoints = toCopy._hitPoints;
		this->_energyPoints = toCopy._energyPoints;
		this->_attackDamage = toCopy._attackDamage;
	}
	return *this;
}

DiamondTrap::~DiamondTrap() {
	std::cout << "DiamondTrap Destructor called" << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI() {
	if (this->_hitPoints <= 0)
		std::cout << this->_name << " DiamondTrap is dead" << std::endl;
	else {
		std::cout << "DiamondTrap name is " << this->_name << std::endl;
		std::cout << "SubCTrap name is " << ClapTrap::_name << std::endl;
	}
}

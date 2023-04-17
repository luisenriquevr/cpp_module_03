/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvarela <lvarela@student.42madrid.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 20:20:58 by lvarela           #+#    #+#             */
/*   Updated: 2023/04/17 20:08:28 by lvarela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << GREEN << "[FragTrap][unnamed] Default constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
    std::cout << GREEN << "[FragTrap][" << name << "] Name constructor called" << RESET << std::endl;
}

FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy) {
    std::cout << RED << "[ClapTrap][" << this->_name <<  "] Copy constructor called" << RESET << std::endl;
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

void FragTrap::highFiveGuys() {
    std::cout << GREEN << "[FragTrap][" << this->_name << "] request a mega high fives" << RESET << std::endl;
}

std::ostream &operator<<(std::ostream &COUT, const FragTrap &FragTrap) {
    COUT << FragTrap.getName();
    return COUT;
}

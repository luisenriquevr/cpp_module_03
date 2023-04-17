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
    std::cout << "FragTrap default constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name) {
    std::cout << "FragTrap name constructor called" << std::endl;
    this->_hitPoints = 100;
    this->_energyPoints = 100;
    this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &toCopy) : ClapTrap(toCopy) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &toCopy) {
    std::cout << "FragTrap default constructor called" << std::endl;
    if (this != &toCopy) {
        (std::string) this->_name = (std::string)toCopy._name;
        this->_hitPoints = toCopy._hitPoints;
        this->_energyPoints = toCopy._energyPoints;
        this->_attackDamage = toCopy._attackDamage;
    }
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap destructor called" << std::endl;
}

void FragTrap::highFiveGuys() {
    std::cout << "FragTrap " << this->_name << " request a mega high fives" << std::endl;
}

std::ostream &operator<<(std::ostream &COUT, const FragTrap &FragTrap) {
    COUT << FragTrap.getName();
    return COUT;
}

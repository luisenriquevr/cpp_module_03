#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("unnamed"), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitpoints(10), _energyPoints(10), _attackDamage(0) {
    std::cout << "Parameter constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &toCopy) {
    std::cout << "Copy constructor called" << std::endl;
    *this = toCopy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &toCopy) {
    std::cout << "Assigned constructor called" << std::endl;
    if (this != &toCopy) {
        (std::string) this->_name = (std::string) toCopy._name;
        this->_hitpoints = toCopy._hitpoints;
        this->_energyPoints = toCopy._energyPoints;
        this->_attackDamage = toCopy._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor called" << std::endl;
}

void ClapTrap::setHitpoints(unsigned int hitpoints) {
    this->_hitpoints = hitpoints;
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

const unsigned int ClapTrap::getEnergyPoints() {
    return this->_energyPoints;
}

const unsigned int ClapTrap::attackDamage() {
    return this->_attackDamage;
}

/*
void ClapTrap::attack(std::string const &target) {
    std::cout << "ClapTrap " << this->getName() << " attack " << target << ", causing " << this->getAtackDamage() << " points of damage!";
}

void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);
*/
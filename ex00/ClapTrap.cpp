#include "ClapTrap.hpp"

std::string		ClapTrap::getName(void) const {
	return (this->_Name);
}

std::int32_t	ClapTrap::getHit(void) const {
	return (this->_Hit);
}

std::int32_t	ClapTrap::getEnergy(void) const {
	return (this->_Energy);
}

std::int32_t	ClapTrap::getAttackDamage(void) const {
	return (this->_Attack_Damage);
}

ClapTrap::ClapTrap(void) {
	std::cout << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name) {
	std::cout << "Parametrized constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	std::cout << "Copy constructor" << std::endl;
	*this = clapTrap;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &clapTrap) {
	std::cout << "Copy assignment constructor" << std::endl;
	this->_Hit = clapTrap.getHit();
	this->_Energy = clapTrap.getEnergy();
	this->_Attack_Damage = clapTrap.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap(void) {
	std::cout << "Destructor" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	this->_Attack_Damage
}

#include "ClapTrap.hpp"

std::string		ClapTrap::getName() const {
	return (this->_Name);
}

int32_t	ClapTrap::getHit() const {
	return (this->_Hit);
}

int32_t	ClapTrap::getEnergy() const {
	return (this->_Energy);
}

int32_t	ClapTrap::getAttackDamage() const {
	return (this->_Attack_Damage);
}

ClapTrap::ClapTrap() : _Name("Unnamed"), _Hit(10), _Energy(10), _Attack_Damage(0) {
	std::cout << "Default constructor" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) : _Name(name), _Hit(10), _Energy(10), _Attack_Damage(0) {
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

ClapTrap::~ClapTrap() {
	std::cout << "Destructor" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	this->_Attack_Damage;
}

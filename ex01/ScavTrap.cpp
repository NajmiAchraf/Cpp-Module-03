#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default constructor ScavTrap" << std::endl;
	this->_Name = "Unnamed";
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 20;
}

ScavTrap::ScavTrap(const std::string& name) {
	std::cout << "Parametrized constructor ScavTrap" << std::endl;
	this->_Name = name;
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) {
	std::cout << "Copy constructor ScavTrap" << std::endl;
	*this = scavTrap;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &scavTrap) {
	std::cout << "Copy assignment constructor ScavTrap" << std::endl;
	this->_Hit = scavTrap.getHit();
	this->_Energy = scavTrap.getEnergy();
	this->_Attack_Damage = scavTrap.getAttackDamage();
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode" << std::endl;
}

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "Default constructor DiamondTrap" << std::endl;
	this->_Name = "Unnamed";
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 20;
}

DiamondTrap::DiamondTrap(const std::string &name) {
	std::cout << "Parametrized constructor DiamondTrap" << std::endl;
//	ClapTrap::_Name =
	this->_Name = name;
	this->_Hit = ;
	this->_Energy = 50;
	this->_Attack_Damage = 20;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) {
	std::cout << "Copy constructor DiamondTrap" << std::endl;
	*this = diamondTrap;
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &diamondTrap) {
	std::cout << "Copy assignment constructor DiamondTrap" << std::endl;
	this->_Hit = diamondTrap.getHit();
	this->_Energy = diamondTrap.getEnergy();
	this->_Attack_Damage = diamondTrap.getAttackDamage();
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor DiamondTrap" << std::endl;
}


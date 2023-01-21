#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() {
	std::cout << "Default constructor DiamondTrap" << std::endl;
	this->_Name = "Unnamed";
	this->ClapTrap::_Name = "Unnamed_clap_name";
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 30;
}

DiamondTrap::DiamondTrap(const std::string &name) {
	std::cout << "Parametrized constructor DiamondTrap" << std::endl;
	this->_Name = name;
	this->ClapTrap::_Name = name + "_clap_name";
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 30;
}

DiamondTrap::DiamondTrap(const DiamondTrap &diamondTrap) : ClapTrap(), ScavTrap(), FragTrap() {
	std::cout << "Copy constructor DiamondTrap" << std::endl;
	*this = diamondTrap;
}

DiamondTrap	&DiamondTrap::operator = (const DiamondTrap &diamondTrap) {
	std::cout << "Copy assignment constructor DiamondTrap" << std::endl;
	this->_Name = diamondTrap.getName();
	this->_Hit = diamondTrap.getHit();
	this->_Energy = diamondTrap.getEnergy();
	this->_Attack_Damage = diamondTrap.getAttackDamage();
	return (*this);
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Destructor DiamondTrap" << std::endl;
}

void	DiamondTrap::attack(const std::string &target) {
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI() {
	std::cout << "DiamondTrap name is : " << this->_Name << "." << std::endl;
	std::cout << "ClapTrap name is : " << this->ClapTrap::_Name << "." << std::endl;
}

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "Default constructor ScavTrap" << std::endl;
	this->_Name = "Unnamed";
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 20;
}

ScavTrap::ScavTrap(const std::string &name) {
	std::cout << "Parametrized constructor ScavTrap" << std::endl;
	this->_Name = name;
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &scavTrap) : ClapTrap(scavTrap) {
	std::cout << "Copy constructor ScavTrap" << std::endl;
	*this = scavTrap;
}

ScavTrap	&ScavTrap::operator = (const ScavTrap &scavTrap) {
	std::cout << "Copy assignment constructor ScavTrap" << std::endl;
	this->_Name = scavTrap.getName();
	this->_Hit = scavTrap.getHit();
	this->_Energy = scavTrap.getEnergy();
	this->_Attack_Damage = scavTrap.getAttackDamage();
	return (*this);
}

ScavTrap::~ScavTrap() {
	std::cout << "Destructor ScavTrap" << std::endl;
}

void	ScavTrap::attack(const std::string &target) {
	if (this->_Hit == 0) {
		std::cout << "ScavTrap " << this->_Name << " is already dead!" << std::endl;
		return ;
	}
	if (this->_Energy == 0) {
		std::cout << "ScavTrap " << this->_Name << " does not have the energy to attack!" << std::endl;
		return ;
	}
	this->_Energy--;
	this->_Attack_Damage++;
	std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_Damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate() {
	std::cout << "ScavTrap " << this->_Name << " is now in Gate keeper mode" << std::endl;
}

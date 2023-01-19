#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "Default constructor FragTrap" << std::endl;
	this->_Name = "Unnamed";
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 20;
}

FragTrap::FragTrap(const std::string &name) {
	std::cout << "Parametrized constructor FragTrap" << std::endl;
	this->_Name = name;
	this->_Hit = 100;
	this->_Energy = 50;
	this->_Attack_Damage = 20;
}

FragTrap::FragTrap(const FragTrap &fragTrap) {
	std::cout << "Copy constructor FragTrap" << std::endl;
	*this = fragTrap;
}

FragTrap	&FragTrap::operator = (const FragTrap &fragTrap) {
	std::cout << "Copy assignment constructor FragTrap" << std::endl;
	this->_Hit = fragTrap.getHit();
	this->_Energy = fragTrap.getEnergy();
	this->_Attack_Damage = fragTrap.getAttackDamage();
	return (*this);
}

FragTrap::~FragTrap() {
	std::cout << "Destructor FragTrap" << std::endl;
}

void	FragTrap::highFivesGuys() {
	std::cout << "Again, add more tests to your program." << std::endl;
}

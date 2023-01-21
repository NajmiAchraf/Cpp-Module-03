#include "ClapTrap.hpp"

std::string		ClapTrap::getName() const {
	return (this->_Name);
}

int	ClapTrap::getHit() const {
	return (this->_Hit);
}

int	ClapTrap::getEnergy() const {
	return (this->_Energy);
}

int	ClapTrap::getAttackDamage() const {
	return (this->_Attack_Damage);
}

ClapTrap::ClapTrap() : _Name("Unnamed"), _Hit(10), _Energy(10), _Attack_Damage(0) {
	std::cout << "Default constructor ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : _Name(name), _Hit(10), _Energy(10), _Attack_Damage(0) {
	std::cout << "Parametrized constructor ClapTrap" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &clapTrap) {
	std::cout << "Copy constructor ClapTrap" << std::endl;
	*this = clapTrap;
}

ClapTrap	&ClapTrap::operator = (const ClapTrap &clapTrap) {
	std::cout << "Copy assignment constructor ClapTrap" << std::endl;
	this->_Name = clapTrap.getName();
	this->_Hit = clapTrap.getHit();
	this->_Energy = clapTrap.getEnergy();
	this->_Attack_Damage = clapTrap.getAttackDamage();
	return (*this);
}

ClapTrap::~ClapTrap() {
	std::cout << "Destructor ClapTrap" << std::endl;
}

void	ClapTrap::attack(const std::string &target) {
	if (this->_Hit == 0) {
		std::cout << "ClapTrap " << this->_Name << " is already dead!" << std::endl;
		return ;
	}
	if (this->_Energy == 0) {
		std::cout << "ClapTrap " << this->_Name << " does not have the energy to attack!" << std::endl;
		return ;
	}
	this->_Energy--;
	this->_Attack_Damage++;
	std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_Attack_Damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount) {
	if (this->_Hit == 0) {
		std::cout << "ClapTrap " << this->_Name << " is already dead!" << std::endl;
		return ;
	}
	this->_Hit -= amount;
	if (this->_Hit < 0) {
		this->_Hit += amount;
		std::cout << "ClapTrap " << this->_Name << " does not have enough hit points to take damage!" << std::endl;
		return ;
	}
	this->_Attack_Damage--;
	std::cout << "ClapTrap " << this->_Name << " takes " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount) {
	if (this->_Hit == 0) {
		std::cout << "ClapTrap " << this->_Name << " is already dead!" << std::endl;
		return ;
	}
	if (this->_Energy == 0) {
		std::cout << "ClapTrap " << this->_Name << " does not have the energy to be repaired!" << std::endl;
		return ;
	}
	this->_Hit += amount;
	this->_Energy--;
	std::cout << "ClapTrap " << this->_Name << " is repaired by " << amount << " points!" << std::endl;
}

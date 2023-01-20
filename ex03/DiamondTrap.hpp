#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

private:

	std::string	_Name;

public:

	DiamondTrap();
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &diamondTrap);
	DiamondTrap &operator = (const DiamondTrap &diamondTrap);
	~DiamondTrap();

	void	attack(const std::string& target);
	void	whoAmI();

};

#endif

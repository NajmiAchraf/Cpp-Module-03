#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#unclude "ScavTrap.hpp"
#unclude "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap {

public:

	DiamondTrap();
	DiamondTrap(const std::string &name);
	DiamondTrap(const DiamondTrap &diamondTrap);
	DiamondTrap &operator = (const DiamondTrap &diamondTrap);
	~DiamondTrap();

	void	whoAmI();
};

#endif

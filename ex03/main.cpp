#include "DiamondTrap.hpp"

int	main () {
	FragTrap	fragTrap("FragTrap");
	ScavTrap	scavTrap("ScavTrap");
	DiamondTrap	diamondTrap("DiamondTrap");

	fragTrap.attack("FragTrap");
	scavTrap.attack("ScavTrap");
	diamondTrap.attack("DiamondTrap");
	diamondTrap.whoAmI();

	return EXIT_SUCCESS;
}

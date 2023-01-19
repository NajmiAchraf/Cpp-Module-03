#include "ScavTrap.hpp"

int	main () {
	ClapTrap	Ralf("Ralf");
	ScavTrap	Leon("Leon");

	Ralf.attack(Leon.getName());
	Leon.takeDamage(Ralf.getAttackDamage());
	Leon.beRepaired(5);
	Leon.attack(Ralf.getName());
	Ralf.takeDamage(Leon.getAttackDamage());
	Ralf.beRepaired(5);
	Leon.guardGate();

	return EXIT_SUCCESS;
}

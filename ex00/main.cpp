#include "ClapTrap.hpp"

int	main () {
	ClapTrap	Ralf("Ralf");
	ClapTrap	Leon("Leon");

	Ralf.attack(Leon.getName());
	Leon.takeDamage(Ralf.getAttackDamage());
	Leon.beRepaired(5);
	Leon.attack(Ralf.getName());
	Ralf.takeDamage(Leon.getAttackDamage());
	Ralf.beRepaired(5);
	return EXIT_SUCCESS;
}

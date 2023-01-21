#include "ScavTrap.hpp"

int	main () {
	ClapTrap	Ralf("Ralf");
	ScavTrap	const Mark("Leon");
	ScavTrap	const Ach("Leon 2");
	ScavTrap	Leon(Mark);

	Ralf.attack(Leon.getName());
	Leon.takeDamage(Ralf.getAttackDamage());
	Leon.beRepaired(5);
	Leon.attack(Ralf.getName());
	Ralf.takeDamage(Leon.getAttackDamage());
	Ralf.beRepaired(5);
	Leon.guardGate();

	Leon = Ach;
	Leon.takeDamage(Ralf.getAttackDamage());
	Leon.beRepaired(5);
	Leon.attack(Ralf.getName());

	return EXIT_SUCCESS;
}

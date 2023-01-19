#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main () {
	ClapTrap	Ralf("Ralf");
	ScavTrap	Leon("Leon");
	FragTrap	John("John");

	Ralf.attack(Leon.getName());
	Leon.takeDamage(Ralf.getAttackDamage());
	Leon.beRepaired(5);
	Leon.attack(Ralf.getName());
	Ralf.takeDamage(Leon.getAttackDamage());
	Ralf.beRepaired(5);
	John.highFivesGuys();
	return EXIT_SUCCESS;
}

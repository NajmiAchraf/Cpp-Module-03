#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstdlib>

class ClapTrap {

private:

	std::string		_Name;
	int			_Hit;
	int			_Energy;
	int			_Attack_Damage;

public:

	std::string		getName(void) const;
	int			getHit(void) const;
	int			getEnergy(void) const;
	int			getAttackDamage(void) const;

	ClapTrap(void);
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap &operator = (const ClapTrap &clapTrap);
	~ClapTrap(void);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};

#endif

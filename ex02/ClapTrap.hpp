#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstdlib>

class ClapTrap {

protected:

	std::string		_Name;
	int			_Hit;
	int			_Energy;
	int			_Attack_Damage;

public:

	std::string		getName() const;
	int			getHit() const;
	int			getEnergy() const;
	int			getAttackDamage() const;

	ClapTrap();
	ClapTrap(const std::string &name);
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap &operator = (const ClapTrap &clapTrap);
	~ClapTrap();

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};

#endif

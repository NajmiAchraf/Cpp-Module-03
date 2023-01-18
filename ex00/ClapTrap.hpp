#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstdlib>

class ClapTrap {

protected:

	std::string		_Name;
	std::int32_t	_Hit = 10;
	std::int32_t	_Energy = 10;
	std::int32_t	_Attack_Damage = 0;

public:

	std::string		getName(void) const;
	std::int32_t	getHit(void) const;
	std::int32_t	getEnergy(void) const;
	std::int32_t	getAttackDamage(void) const;

	ClapTrap(void);
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap &clapTrap);
	ClapTrap &operator = (const ClapTrap &clapTrap);
	~ClapTrap(void);

	void	attack(const std::string &target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

};

#endif

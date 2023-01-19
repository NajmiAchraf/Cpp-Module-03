#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
# include <cstdlib>
# include <cstdint>

class ClapTrap {

protected:

	std::string		_Name;
	int32_t			_Hit;
	int32_t			_Energy;
	int32_t			_Attack_Damage;

public:

	std::string		getName() const;
	int32_t			getHit() const;
	int32_t			getEnergy() const;
	int32_t			getAttackDamage() const;

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

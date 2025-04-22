#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"

class HumanB
{
	public:
	std::string name;
	Weapon *weapon;

	public:
	void attack() const;
	void setWeapon(Weapon& newWeapon);
	HumanB(std::string newName);	
};

#endif
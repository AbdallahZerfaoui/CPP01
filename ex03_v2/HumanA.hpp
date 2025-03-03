#ifndef HUMAN_A_H
#define HUMAN_A_H

#include <iostream>
#include "Weapon.hpp"

class HumanA
{
	public:
	std::string name;
	Weapon& weapon;

	public:
	void attack() const;
	HumanA(std::string newName, Weapon& newWeapon);
};

#endif
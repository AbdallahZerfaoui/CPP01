#include <iostream>
#include "Weapon.hpp"

class HumanA {
	public:
	std::string name;
	Weapon& weapon;

	public:
	void attack() const;
	HumanA(const std::string& newName, Weapon& newWeapon);
};
#include <iostream>
#include "Weapon.hpp"

class HumanB {
	public:
	std::string name;
	Weapon *weapon;

	public:
	void attack() const;
	void setWeapon(Weapon& new_weapon);
	HumanB(const std::string& name);
};
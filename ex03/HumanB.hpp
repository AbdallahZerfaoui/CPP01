#ifndef HUMAN_B_H
#define HUMAN_B_H

#include "Weapon.hpp"

/**
 * @brief The HumanB class represents a human that has a name and a weapon.
 * The weapon is passed by pointer to the setWeapon method.
 * It can attack with the weapon it has.
 */
class HumanB
{
	private:
		std::string _name;
		Weapon *_weapon;

	public:
		void attack() const;
		void setWeapon(Weapon& newWeapon);
		HumanB(std::string newName);	
};

#endif
#ifndef HUMAN_A_H
#define HUMAN_A_H

#include "Weapon.hpp"

/**
 * @brief The HumanA class represents a human that has a name and a weapon.
 * The weapon is passed by reference to the constructor.
 * It can attack with the weapon it has.
 */
class HumanA
{
	private:
		std::string _name;
		Weapon& _weapon;

	public:
		void attack() const;
		HumanA(std::string newName, Weapon& newWeapon);
};

#endif
#include "HumanB.hpp"


HumanB::HumanB(std::string newName)
: name(newName), weapon(NULL) {}

void HumanB::attack() const
{
	std::cout << name << " attacks with their " << weapon->getType() << '\n';
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	weapon = &newWeapon;
}
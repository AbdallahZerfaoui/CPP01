#include "HumanB.hpp"


// HumanB::HumanB(std::string newName)
// {
// 	name = newName;
// }
// HumanB::HumanB(const std::string& newName) : name(newName){}
HumanB::HumanB(const std::string& name)
    : name(name), weapon(NULL){}

void HumanB::attack() const
{
	std::cout << name << " attacks with their " << weapon->getType() << '\n';
}

void HumanB::setWeapon(Weapon& new_weapon)
{
	// weapon->setType(new_weapon.getType());
	weapon = &new_weapon;
}
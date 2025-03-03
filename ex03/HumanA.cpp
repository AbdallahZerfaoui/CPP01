#include "HumanA.hpp"

// HumanA::HumanA(const std::string& newName, Weapon& newWeapon)
// {
// 	name = newName;
// 	weapon.setType(newWeapon.getType());
// }
HumanA::HumanA(const std::string& name, Weapon& weapon)
    : name(name), weapon(weapon) {}

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << '\n';
}
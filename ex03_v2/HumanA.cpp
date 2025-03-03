#include "HumanA.hpp"
#include "Weapon.hpp"


HumanA::HumanA(std::string newName, Weapon& newWeapon)
: name(newName), weapon(newWeapon) {}

void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << '\n';
}
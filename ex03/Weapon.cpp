#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
: type(newType){}

void Weapon::setType(std::string newType)
{
	type = newType;
}

std::string Weapon::getType() const
{
	return type;
}
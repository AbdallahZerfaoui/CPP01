#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
{
	type = newType;
}

void Weapon::setType(const std::string newType)
{
	type = newType;
}

const std::string Weapon::getType() const
{
	return type;
}
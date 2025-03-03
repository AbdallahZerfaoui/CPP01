#include "Zombie.hpp"

void Zombie::addName(std::string newName)
{
	name = newName;
}

std::string Zombie::getName()
{
	return name;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
	std::cout << "GoodBye " << name << "!!!\n";
}
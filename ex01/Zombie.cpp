#include "Zombie.hpp"
#include <iostream>

void Zombie::addName(std::string newName)
{
	_name = newName;
}

std::string Zombie::getName()
{
	return _name;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
	std::cout << "GoodBye " << _name << "!!!\n";
}
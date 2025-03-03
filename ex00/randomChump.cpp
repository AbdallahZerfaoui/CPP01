#include "Zombie.hpp"

void randomChump(std::string name)
{
	Zombie new_zombie;
	new_zombie.addName(name);
	new_zombie.announce();
}
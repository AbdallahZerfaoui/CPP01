#include "Zombie.hpp"

int main()
{
	std::string name = "Bob";
	std::string name2 = "Momo";
	Zombie *new_zombie = newZombie(name);
	new_zombie->announce();
	delete new_zombie;
	randomChump(name2);
	
}
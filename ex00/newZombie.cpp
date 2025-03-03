#include "Zombie.hpp"

Zombie *newZombie(std::string name)
{
	Zombie *zombie = new Zombie;
	zombie->addName(name);
	return (zombie);
}
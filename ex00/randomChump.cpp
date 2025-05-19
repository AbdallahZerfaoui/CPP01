#include "Zombie.hpp"

/**
 * @brief Creates a new Zombie on the stack and announces it.
 * @param name The name of the Zombie.
 * @note The Zombie is automatically destroyed when it goes out of scope.
*/
void randomChump(std::string name)
{
	Zombie new_zombie;
	new_zombie.addName(name);
	new_zombie.announce();
}

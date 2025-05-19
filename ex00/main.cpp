#include "Zombie.hpp"

/***
 * @brief main function
 * @details This function creates a new zombie and announces it.
 * It also creates a random zombie and announces it.
 * @note new_zombie needs to be deleted to avoid memory leaks.
 * because it is allocated on the heap. 
 * @return int
 */

int main()
{
	std::string name = "Bob";
	std::string name2 = "Momo";
	// in the heap
	Zombie *new_zombie = newZombie(name);
	new_zombie->announce();
	delete new_zombie;
	// in the stack
	randomChump(name2);
}

#include "Zombie.hpp"
#include "colors.hpp"
#include <iostream>

/**
 * @brief Creates a horde of zombies.
 * 
 * @param N The number of zombies in the horde.
 * @param name The name to assign to each zombie.
 * @return Zombie* Pointer to the array of zombies.
 */
Zombie *zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << RED <<"Zombie horde size must be greater than 0.\n" << RESET;
		return nullptr;
	}

	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++) 
		horde[i].addName(name);

	return horde;
}

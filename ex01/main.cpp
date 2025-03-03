#include "Zombie.hpp"

// compile with the flag -g
// use valgrind : valgrind --leak-check=full --show-leak-kinds=all --track-origins=yes ./exe

int main()
{
	int N = 5;
	std::string name = "Bob";
	Zombie *horde = zombieHorde(N, name);

	for (int i = 0; i < N; i++)
	{
		horde[i].announce();
	}
	delete[] horde;
}
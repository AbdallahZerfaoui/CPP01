#include <iostream>
#include <sstream>  // Needed for stringstream
#include <string>


class Zombie {
	std::string name;

	public:
	void addName(std::string newName);
	std::string getName();
	void announce();
	~Zombie();
};

// functions
Zombie *zombieHorde(int N, std::string name);
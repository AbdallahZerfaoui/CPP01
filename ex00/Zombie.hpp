#include <iostream>

class Zombie 
{
	private:
		std::string name;

	public:
		void addName(std::string newName);
		std::string getName();
		void announce();
		~Zombie();
};

// functions
Zombie *newZombie(std::string name);
void randomChump(std::string name);
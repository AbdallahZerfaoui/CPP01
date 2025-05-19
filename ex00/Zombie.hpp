// Zombie.hpp
#include <string>

class Zombie
{
	private:
		std::string _name;

	public:
		void addName(std::string newName);
		std::string getName();
		void announce();
		~Zombie();
};

// functions
Zombie *newZombie(std::string name);
void randomChump(std::string name);
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
Zombie *zombieHorde(int N, std::string name);
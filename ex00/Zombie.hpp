// Zombie.hpp
#include <string>

/**
 * @class Zombie
 * @brief A class representing a zombie.
 * @details This class is used to create a zombie with a name and announce it.
 */
class Zombie
{
	private:
		std::string _name;

	public:
		Zombie(std::string name); // Parameterized constructor
		void addName(std::string newName);
		std::string getName();
		void announce();
		~Zombie();
};

// functions
Zombie *newZombie(std::string name);
void randomChump(std::string name);
#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon
{	
	private:
		std::string type;

	public:
		std::string getType() const;
		void setType(std::string newType);
		Weapon(std::string newType = "");
};

#endif
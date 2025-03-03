#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>


class Weapon {
	std::string type;

	public:
	const std::string getType() const; 
	void setType(const std::string newType);
	Weapon(std::string newType = "");
};

#endif
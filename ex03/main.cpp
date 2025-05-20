/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:44:44 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/20 21:44:45 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

/**
* @brief This program demonstrates the use of classes and objects in C++.
* It creates a weapon and two humans, one with a reference to the weapon and one with a pointer to the weapon.
* The humans attack with the weapon, and then the weapon type is changed.
* The humans attack again to show that the weapon type has changed.
* The program uses the Weapon, HumanA, and HumanB classes to demonstrate this.
 */
int main()
{
	// Case 1: HumanA and HumanB with a reference to the weapon
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	// Case 2: HumanB with a pointer to the weapon
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}
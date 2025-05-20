/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:44:39 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/20 21:46:05 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string newName)
: _name(newName), _weapon(NULL) {}

void HumanB::attack() const
{
	std::cout << _name << " attacks with their " << _weapon->getType() << '\n';
}

void HumanB::setWeapon(Weapon& newWeapon)
{
	_weapon = &newWeapon;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:44:34 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/20 21:44:35 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "Weapon.hpp"

#include <iostream>


HumanA::HumanA(std::string newName, Weapon& newWeapon)
: _name(newName), _weapon(newWeapon) {}

void HumanA::attack() const
{
	std::cout << _name << " attacks with their " << _weapon.getType() << std::endl;
}
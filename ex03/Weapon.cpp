/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:44:50 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/20 21:44:51 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string newType)
: type(newType){}

void Weapon::setType(std::string newType)
{
	type = newType;
}

std::string Weapon::getType() const
{
	return type;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:42:25 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/20 21:42:26 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

void Zombie::addName(std::string newName)
{
	_name = newName;
}

std::string Zombie::getName()
{
	return _name;
}

void Zombie::announce()
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ...\n";
}

Zombie::~Zombie()
{
	std::cout << "GoodBye " << _name << "!!!\n";
}
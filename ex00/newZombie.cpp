/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:41:47 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/20 21:41:48 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
* @brief Creates a new Zombie on the heap.
* @param name The name of the Zombie.
* @return A pointer to the new Zombie.
* @note The caller is responsible for deleting the Zombie to avoid memory leaks.
*/
Zombie *newZombie(std::string name)
{
	// new returns a pointer to the allocated memory
	// and the constructor initializes the Zombie with the given name
	return new Zombie(name);
}
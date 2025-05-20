/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:41:53 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/20 21:41:54 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/**
 * @brief Creates a new Zombie on the stack and announces it.
 * @param name The name of the Zombie.
 * @note The Zombie is automatically destroyed when it goes out of scope.
*/
void randomChump(std::string name)
{
	Zombie new_zombie(name);
	new_zombie.announce();
}

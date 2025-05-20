/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 21:41:35 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/20 21:41:36 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/***
 * @brief main function
 * @details This function creates a new zombie and announces it.
 * It also creates a random zombie and announces it.
 * @note new_zombie needs to be deleted to avoid memory leaks.
 * because it is allocated on the heap. 
 * @return int
 */

int main()
{
	std::string name = "Bob";
	std::string name2 = "Momo";
	// in the heap
	Zombie *new_zombie = newZombie(name);
	new_zombie->announce();
	delete new_zombie;
	// in the stack
	randomChump(name2);
}

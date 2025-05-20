/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 22:09:31 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/20 23:59:15 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void)
{
	Harl newHarl;

	newHarl.complain("DEBUG");
	newHarl.complain("INFO");
	newHarl.complain("WARNING");
	newHarl.complain("ERROR");
	newHarl.complain("INVALID");
	return 0;
}
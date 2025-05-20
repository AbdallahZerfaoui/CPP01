/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azerfaou <azerfaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/20 22:15:55 by azerfaou          #+#    #+#             */
/*   Updated: 2025/05/20 22:48:59 by azerfaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include "colors.hpp"
#include <iostream>
#include <string>

Harl::Harl() {}
Harl::~Harl() {}

void Harl::_debug(void)
{
	std::cout << GREEN << "[ DEBUG ]" << RESET;
	std::cout << " I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
	std::cout << GREEN << "[ INFO ]" << RESET;
	std::cout << " I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for it!" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << ORANGE << "[ WARNING ]" << RESET;
	std::cout << " I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::_error(void)
{
	std::cout << RED <<"[ ERROR ]"<< RESET;
	std::cout << " This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};

	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:33:39 by naterrie          #+#    #+#             */
/*   Updated: 2023/11/29 13:08:58 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}


void	Harl::complain(std::string level)
{
	std::string levels[4] = {"debug", "info", "warning", "error"};
	void	(Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	for (int i = 0; i < 4; i++)
	{
		if (levels[i] == level)
		{
			(this->*f[i])();
			return ;
		}
	}

}

void	Harl::debug(void)
{
	std::cout << "[DEBUG] This is a debug message" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO] This is an info message" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING] This is a warning message" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR] This is an error message" << std::endl;
}

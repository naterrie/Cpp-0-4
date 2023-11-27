/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:22:14 by naterrie          #+#    #+#             */
/*   Updated: 2023/11/27 16:43:39 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int main(char **argv, int argc)
{
	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	std::ofstream file(argv[1]);
	if (!file.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return (1);
	}
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "Empty string" << std::endl;
		return (1);
	}
	return (0);
}

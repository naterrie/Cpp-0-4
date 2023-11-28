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

int main(int argc, char **argv)
{
	std::string str;
	std::string outfile;

	if (argc != 4)
	{
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	if (argv[2][0] == '\0' || argv[3][0] == '\0')
	{
		std::cout << "Empty string" << std::endl;
		return (1);
	}
	if (infile_to_str(argv[1], str))
		return (1);

	str = ft_replace(str, argv[2], argv[3]);
	outfile = std::string(argv[1]) + ".replace";

	if (ft_outfile(outfile.c_str(), str))
		return (1);
	return (0);
}

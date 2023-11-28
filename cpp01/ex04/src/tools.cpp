/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:43:39 by naterrie          #+#    #+#             */
/*   Updated: 2023/11/27 16:43:44 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "sed.hpp"

int	infile_to_str(const char *sinfile, std::string &str)
{
	std::string line;

	std::ifstream infile(sinfile);
	if (!infile.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return 1;
	}
	while (std::getline(infile, line))
	{
		str += line;
		str += '\n';
	}
	infile.close();
	return 0;
}

std::string	ft_replace(std::string str, std::string s1, std::string s2)
{
	size_t pos = str.find(s1);

	while (pos != std::string::npos)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos = str.find(s1, pos + s2.length());
	}
	return str;
}

int	ft_outfile(const char *soutfile, std::string str)
{
	std::ofstream outfile;

	outfile.open(soutfile);
	if (!outfile.is_open())
	{
		std::cout << "Error opening file" << std::endl;
		return 1;
	}
	outfile << str;
	outfile.close();
	return 0;
}

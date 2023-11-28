/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sed.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 16:43:04 by naterrie          #+#    #+#             */
/*   Updated: 2023/11/27 16:43:32 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef SED_HPP
# define SED_HPP

# include <iostream>
# include <fstream>
# include <string>

int			infile_to_str(const char *sinfile, std::string &str);
std::string	ft_replace(std::string str, std::string s1, std::string s2);
int			ft_outfile(const char *soutfile, std::string str);

#endif

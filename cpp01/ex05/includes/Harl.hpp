/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 12:33:37 by naterrie          #+#    #+#             */
/*   Updated: 2023/11/29 12:56:55 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <fstream>
# include <string>

class Harl {

	public:
		Harl(void);
		~Harl(void);
		void	complain(std::string level);

	private:
		void	debug (void);
		void	info (void);
		void	warning (void);
		void	error (void);
};

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naterrie <naterrie@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 13:18:28 by naterrie          #+#    #+#             */
/*   Updated: 2023/12/13 14:39:41 by naterrie         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

#include <iostream>

class Fixed {

	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		Fixed &operator=(Fixed const &ctr);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_value;
		static const int	_bits = 8;
};

#endif

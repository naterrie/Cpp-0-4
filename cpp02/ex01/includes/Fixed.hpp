/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:02:17 by naterrie          #+#    #+#             */
/*   Updated: 2023/11/30 02:25:51 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {

	public:
		Fixed(void);
		Fixed(Fixed const &src);
		Fixed(int const value);
		Fixed(float const value);

		~Fixed(void);

		Fixed &operator=(Fixed const &ctr);

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_value;
		static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif

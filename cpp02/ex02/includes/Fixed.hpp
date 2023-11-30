/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:02:17 by naterrie          #+#    #+#             */
/*   Updated: 2023/11/30 12:32:46 by aviscogl         ###   ########lyon.fr   */
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

		Fixed	&operator=(Fixed const &ctr);

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		bool	operator>(Fixed const &other);
		bool	operator<(Fixed const &other);
		bool	operator>=(Fixed const &other);
		bool	operator<=(Fixed const &other);
		bool	operator==(Fixed const &other);
		bool	operator!=(Fixed const &other);

		Fixed	operator+(Fixed const &other) const;
		Fixed	operator-(Fixed const &other) const;
		Fixed	operator*(Fixed const &other) const;
		Fixed	operator/(Fixed const &other) const;

		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed	min(Fixed &a, Fixed &b);
		static Fixed	max(Fixed &a, Fixed &b);
		static Fixed	min(Fixed const &a, Fixed const &b);
		static Fixed	max(Fixed const &a, Fixed const &b);

	private:
		int					_value;
		static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream &o, Fixed const &i);

#endif

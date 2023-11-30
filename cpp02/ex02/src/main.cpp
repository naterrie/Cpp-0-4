/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aviscogl <aviscogl@student.42lyon.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:02:23 by naterrie          #+#    #+#             */
/*   Updated: 2023/11/30 12:27:03 by aviscogl         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
	return 0;
}

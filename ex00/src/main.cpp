/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 21:36:04 by akostian          #+#    #+#             */
/*   Updated: 2025/07/06 02:09:36 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../include/whatever.hpp"

int main(void) {
	{
		int a = 2;
		int b = 3;
		::swap(a, b);

		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	}
	{
		std::string c = "chaine1";
		std::string d = "chaine2";

		::swap(c, d);

		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
		std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	}
	{
		double a = 2.4;
		double b = 3.4;

		::swap(a, b);

		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
		std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	}
	{
		int a;
		int b;
		int *aptr = &a;
		int *bptr = &b;

		std::cout << "aptr = " << aptr << ", bptr = " << bptr << std::endl;

		::swap(aptr, bptr);

		std::cout << "aptr = " << aptr << ", bptr = " << bptr << std::endl;
		std::cout << "min( aptr, bptr ) = " << ::min(aptr, bptr) << std::endl;
		std::cout << "max( aptr, bptr ) = " << ::max(aptr, bptr) << std::endl;
	}
}

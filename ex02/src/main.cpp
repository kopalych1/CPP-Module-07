/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 02:09:08 by akostian          #+#    #+#             */
/*   Updated: 2025/08/21 17:50:43 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/Array.hpp"

int main(void) {
	{
		Array<int> arr(4);

		arr[0] = 12;
		arr[1] = 22;
		arr[2] = 32;
		arr[3] = 42;

		std::cout << arr[0] << "\n";
		std::cout << arr[1] << "\n";
		std::cout << arr[2] << "\n";
		std::cout << arr[3] << "\n";

		// Throws an exeption
		try {
			std::cout << arr[4] << "\n";
		} catch (const std::exception& e) {
			std::cerr << e.what() << '\n';
		}
	}
	{
		Array<float> arr(2);
		arr[0] = 42.34;
		arr[1] = 12.324;

		std::cout << arr << "\n";
		std::cout << arr.size() << "\n";
	}
	{
		Array<int> arr(4);

		arr[0] = 12;
		arr[1] = 22;
		arr[2] = 32;
		arr[3] = 42;
		std::cout << arr << "\n";
	}
	{
		std::cout << "\n"
		          << ">===== Deep copy =====<\n"
		          << "\n";

		Array<std::string> arr1(3);
		Array<std::string> arr2;

		arr1[0] = "Hello";
		arr1[1] = "Campus";
		arr1[2] = "42";

		std::cout << "arr1: " << arr1 << "\n";
		std::cout << "arr2: " << arr2 << "\n";

		arr2 = arr1;
		Array<std::string> arr3(arr1);

		std::cout << "arr1: " << arr1 << "\n";
		std::cout << "arr2: " << arr2 << "\n";
		std::cout << "arr3: " << arr3 << "\n";

		arr1[0] = "BOB";
		arr2[0] = "1231231";
		arr3[0] = "HEHEHEHE";

		std::cout << "After change:" << '\n';

		std::cout << "arr1: " << arr1 << "\n";
		std::cout << "arr2: " << arr2 << "\n";
		std::cout << "arr3: " << arr3 << "\n";
	}
}

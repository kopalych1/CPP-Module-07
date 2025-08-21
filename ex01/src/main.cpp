/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 21:46:23 by akostian          #+#    #+#             */
/*   Updated: 2025/08/21 13:09:42 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "../include/iter.hpp"

template <typename T>
void print_val(const T &val) {
	std::cout << val << "\n";
}

template <typename T>
void double_val(T &val) {
	val *= 2;
}

int main(void) {
	{
		std::cout << "\n"
		          << ">===== Basic tests =====<\n"
		          << "\n";
		std::cout << ">= Int:" << "\n";

		int arr[] = {4, 2, 512};

		iter(arr, sizeof(arr) / sizeof(int), print_val<int>);
		iter(arr, sizeof(arr) / sizeof(int), double_val<int>);
		iter(arr, sizeof(arr) / sizeof(int), print_val<int>);
	}
	{
		std::cout << ">= Float:" << "\n";
		float arr[] = {2.1f, 4.2f, 512.0f};

		iter(arr, sizeof(arr) / sizeof(float), print_val<float>);
		iter(arr, sizeof(arr) / sizeof(float), double_val<float>);
		iter(arr, sizeof(arr) / sizeof(float), print_val<float>);
	}
	{
		std::cout << ">= String:" << "\n";
		std::string arr[] = {"Hello", "Campus", "42"};

		iter(arr, sizeof(arr) / sizeof(std::string), print_val<std::string>);
	}
	{
		std::cout << "\n"
		          << ">===== Const array =====<\n"
		          << "\n";

		const int arr[] = {1, 2, 3, 4, 5};

		iter(arr, sizeof(arr) / sizeof(arr[0]), print_val<int>);
	}
}

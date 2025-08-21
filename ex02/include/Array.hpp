/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 02:09:01 by akostian          #+#    #+#             */
/*   Updated: 2025/07/07 04:40:27 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
   private:
	size_t size_;
	T* value_;

   public:
	Array();
	Array(const unsigned int n);
	Array(const Array& other);
	Array& operator=(const Array& other);
	~Array();

	T& operator[](size_t index);
	template <typename U>
	friend std::ostream& operator<<(std::ostream& os, const Array<U>& arr);

	size_t size(void) const;
};

#include "Array.tpp"

#endif  // ARRAY_HPP

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/07 02:10:01 by akostian          #+#    #+#             */
/*   Updated: 2025/07/07 04:36:54 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

template <typename T>
Array<T>::Array() :
	size_(0),
	value_(0)
{
}

template <typename T>
Array<T>::Array(const unsigned int n) :
	size_(n),
	value_(new T[n])
{
}

template <typename T>
Array<T>::Array(const Array& other)
{
	this->operator=(other);
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this != &other) {
		delete this->value_;

		this->value_ = new T[other.size_];
		this->size_ = other.size_;

		for (size_t i = 0; i < other.size_; i++)
			this->value_[i] = other.value_[i];
	}
	return *this;
}

template <typename T>
Array<T>::~Array()
{
	delete []this->value_;
}

template <typename T>
T&	Array<T>::operator[](size_t index)
{
	if (index >= this->size_)
		throw std::exception();

	return this->value_[index];
}

template <typename T>
size_t	Array<T>::size(void) const
{
	return this->size_;
}

template <typename T>
std::ostream	&operator<<(std::ostream& os, const Array<T>& arr)
{
	os << '[';
	for (size_t i = 0; i < arr.size_; i++)
	{
		os << arr.value_[i];
		if (i + 1 < arr.size_)
			os << ", ";
	}
	os << ']';

	return os;
}

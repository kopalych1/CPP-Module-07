/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/05 21:36:33 by akostian          #+#    #+#             */
/*   Updated: 2025/07/06 02:03:43 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
void	swap(T &a, T &b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
const T &min(const T &a, const T &b)
{
	if (a < b)
		return a;
	return b;
}


template <typename T>
const T &max(const T &a, const T &b)
{
	if (a > b)
		return a;
	return b;
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akostian <akostian@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/06 22:37:31 by akostian          #+#    #+#             */
/*   Updated: 2025/07/07 01:46:46 by akostian         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <stdlib.h>

template <typename T, typename F>
void iter(T *arr, size_t len, F f)
{
	for (size_t i = 0; i < len; i++)
		f(arr[i]);
}

#endif // ITER_HPP
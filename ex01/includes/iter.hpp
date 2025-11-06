/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/11/04 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <cstdlib>

template <typename T, typename F>
void iter(T& array, const size_t length, F& function)
{
	for (size_t i = 0; i < length; i++)
		function(array[i]);
}

template <typename T>
void incOne(T& x)
{
	x +=1;
}

template <typename T>
void printX(T& x)
{
	std::cout << "[" << x << "]";
}

#endif

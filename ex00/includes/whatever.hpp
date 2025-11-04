/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 14:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/11/04 14:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T& a, T& b)
{
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(const T& a, const T& b)
{
	return (a < b ? a : b);
}

template <typename T>
T max(const T& a, const T& b)
{
	return (a > b ? a : b);
}

#endif

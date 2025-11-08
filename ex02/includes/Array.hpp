/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/11/05 19:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <cstdlib>
# include <ostream>

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_len;
	public:
		Array();
		Array(unsigned int n);
		Array(const Array<T>& other);
		~Array();

		Array<T>& operator=(const Array<T>& other);
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;

		unsigned int size() const;
		void printArray(const Array<T>& arrayX);

		class OutOfBoundsException : public std::exception 
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Index out of bounds");
				}
		};
};

template <typename T>
std::ostream& operator<<(std::ostream& oStream, const Array<T>& arrayX);

# include "../includes/Array.tpp"

#endif

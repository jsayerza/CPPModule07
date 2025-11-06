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

		class OutOfBoundsException : public std::exception 
		{
			public:
				virtual const char* what() const throw()
				{
					return ("Index out of bounds");
				}
		};
};

# include "../includes/Array.tpp"

#endif

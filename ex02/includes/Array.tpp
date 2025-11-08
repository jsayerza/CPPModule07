/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 20:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/11/05 20:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP

#include <iostream>
#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _len(0)
{
	std::cout << "Array default constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _array(n ? new T[n]() : NULL), _len(n)
{	
	std::cout << "Array sized constructor called" << std::endl;
}

template <typename T>
Array<T>::Array(const Array<T>& other) : _array(NULL), _len(0)
{
	std::cout << "Array copy constructor called" << std::endl;
	if (other._len)
	{
		_len = other._len;
		_array = new T[_len];
		for (unsigned int i = 0; i < _len; ++i)
			_array[i] = other._array[i];
	}
}

template <typename T>
Array<T>::~Array()
{
	delete[] _array;
	std::cout << "Array destructor called" << std::endl;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	std::cout << "Array assignment operator called" << std::endl;
	if (this == &other)
		return *this;
	delete[] _array;
	_len = other._len;
	_array = _len ? new T[_len] : NULL;
	for (unsigned int i = 0; i < _len; ++i)
		_array[i] = other._array[i];
	return *this;
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= _len)
		throw OutOfBoundsException();
	return (_array[index]);
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= _len)
		throw OutOfBoundsException();
	return (_array[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
	return (_len);
}

template <typename T>
void printArray(const Array<T>& arrayX)
{
	std::cout << "   --- array size: " << arrayX.size() << std::endl;
	std::cout << "   --- array: ";
	for (unsigned int i = 0; i < arrayX.size(); i++)
	{
		std::cout << "[" << arrayX[i] << "]";
	}
}

template <typename T>
std::ostream& operator<<(std::ostream& oStream, const Array<T>& arrayX )
{
	oStream << "\n   --- arrayX size: " << arrayX.size() << std::endl;
	oStream << "   --- arrayX: ";
	for (unsigned int i = 0; i < arrayX.size(); i++)
	{
		oStream << "[" << arrayX[i] << "]";
	}
	return (oStream);
}

#endif
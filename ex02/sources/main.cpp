/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 19:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/11/05 19:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/Array.hpp"
#include "../includes/Array.hpp"

int	main(void)
{
	{	
		std::cout << "--- Test create array of int()" << std::endl;
		int * a = new int();
		std::cout << "   --- array a: " << *a << std::endl;
		delete a;
		std::cout << std::endl;
	}	


	{
		std::cout << "--- Test create array size 0 (arrayBuit)" << std::endl;
		Array<int> arrayBuit;
		std::cout << "   --- array size: " << arrayBuit.size() << std::endl;
		// std::cout << std::endl;
	}	

	{
		std::cout << "\n--- Test create int array n size (arrayNSize)" << std::endl;
		Array<int> arrayNSize(5);
		std::cout << "   --- array size: " << arrayNSize.size() << std::endl;
		std::cout << std::endl;


		std::cout << "--- Test initialize arrayNSize" << std::endl;
		for (int i = 0; i < (int)arrayNSize.size(); i++)
		{
			arrayNSize[i] = i;
		}
		printArray(arrayNSize);
		std::cout << std::endl;

		
		std::cout << "\n--- Test copy array arrayNSize to copyArrayNSize" << std::endl;
		Array<int> copyArrayNSize(arrayNSize);
		std::cout << copyArrayNSize;
		std::cout << std::endl;

		std::cout << "\n--- Test duplicate (=) array arrayNSize to duplArrayNSize" << std::endl;
		Array<int> duplArrayNSize = arrayNSize;
		std::cout << duplArrayNSize;
		std::cout << std::endl;

		std::cout << "\n--- Test modify array arrayNSize, copyArrayNSize & duplArrayNSize don't change" << std::endl;
		arrayNSize[0] = 42;
		std::cout << arrayNSize;
		std::cout << copyArrayNSize;
		std::cout << duplArrayNSize;
		std::cout << std::endl;

		std::cout << "\n--- Test modify array copyArrayNSize, arrayNSize & duplArrayNSize don't change" << std::endl;
		copyArrayNSize[0] = 666;
		std::cout << arrayNSize;
		std::cout << copyArrayNSize;
		std::cout << duplArrayNSize;
		std::cout << std::endl;

		std::cout << "\n--- Test access to array's 'out of bounds'" << std::endl;
		try
		{
			std::cout << "   --- array: ";
			std::cout << "[" << arrayNSize[5] << "]";
		}
		catch (std::exception& e)
		{
			std::cout << "\nCatched exception: " << e.what() << std::endl;
			std::cout << std::endl;
		}
		
	}	

	{
		std::cout << "\n--- Test create char array n size (arrayNSize)" << std::endl;
		Array<char> arrayNSize(5);
		std::cout << "   --- array size: " << arrayNSize.size() << std::endl;
		std::cout << std::endl;


		std::cout << "--- Test initialize arrayNSize" << std::endl;
		for (int i = 0; i < (int)arrayNSize.size(); i++)
		{
			arrayNSize[i] = i + 'a';
		}
		printArray(arrayNSize);
		std::cout << std::endl;

		
		std::cout << "\n--- Test copy array arrayNSize a copyArrayNSize" << std::endl;
		Array<char> copyArrayNSize(arrayNSize);
		std::cout << copyArrayNSize;
		std::cout << std::endl;

		std::cout << "\n--- Test duplicate (=) array arrayNSize a duplArrayNSize" << std::endl;
		Array<char> duplArrayNSize = arrayNSize;
		std::cout << duplArrayNSize;
		std::cout << std::endl;

		std::cout << "\n--- Test modify array arrayNSize, copyArrayNSize i duplArrayNSize don't change" << std::endl;
		arrayNSize[0] = 'z';
		std::cout << arrayNSize;
		std::cout << copyArrayNSize;
		std::cout << duplArrayNSize;
		std::cout << std::endl;

		std::cout << "\n--- Test modify array copyArrayNSize, arrayNSize i duplArrayNSize don't change" << std::endl;
		copyArrayNSize[0] = 'x';
		std::cout << arrayNSize;
		std::cout << copyArrayNSize;
		std::cout << duplArrayNSize;
		std::cout << std::endl;

		std::cout << "\n--- Test access to array's 'out of bounds'" << std::endl;
		try
		{
			std::cout << "   --- array: ";
			std::cout << "[" << arrayNSize[5] << "]";
		}
		catch (std::exception& e)
		{
			std::cout << "\nCatched exception: " << e.what() << std::endl;
			std::cout << std::endl;
		}
		
	}	

	return (0);
}

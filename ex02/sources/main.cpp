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
		std::cout << "--- Test create empty array" << std::endl;
		Array<int> arrayBuit;
		std::cout << "   --- array size: " << arrayBuit.size() << std::endl;
		std::cout << std::endl;
	}	

	std::cout << "\n--- Test create n size array" << std::endl;
	Array<int> arrayNSize(5);
	std::cout << "   --- array size: " << arrayNSize.size() << std::endl;
	std::cout << std::endl;

	std::cout << "--- Test inicialize n size array" << std::endl;
	for (int i = 0; i < (int)arrayNSize.size(); i++)
	{
		arrayNSize[i] = i;
	}
	std::cout << "   --- array size: " << arrayNSize.size() << std::endl;
	std::cout << "   --- array: ";
	for (int i = 0; i < (int)arrayNSize.size(); i++)
	{
		std::cout << "[" << arrayNSize[i] << "]";
	}
	std::cout << std::endl << std::endl;

	std::cout << "\n--- Test copy array" << std::endl;
	Array<int> arrayCopia(arrayNSize);
	std::cout << "   --- array size: " << arrayCopia.size() << std::endl;
	std::cout << "   --- array: ";
	for (int i = 0; i < (int)arrayCopia.size(); i++)
	{
		std::cout << "[" << arrayCopia[i] << "]";
	}
	std::cout << std::endl << std::endl;

	std::cout << "\n--- Test modify arrayCopia value" << std::endl;
	arrayCopia[0] = 666;
	std::cout << "arrayCopia[0]: [" << arrayCopia[0] << "]";
	std::cout << "arrayCopia[0]: [" << arrayCopia[0] << "]";

	std::cout << "\n--- Test access to array's outofbounds" << std::endl;
	try
	{
		std::cout << "   --- array: ";
		std::cout << "[" << arrayNSize[5] << "]";
	}
	catch (std::exception& e)
	{
		std::cout << "\nCatched exception: " << e.what() << std::endl;
	}
	
	return (0);
}


//// Notes:

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
#include "../includes/array.hpp"

int	main(void)
{
	{	
		std::cout << "--- Test crear array a int()" << std::endl;
		int * a = new int();
		std::cout << "   --- array a: " << *a << std::endl;
		delete a;
		std::cout << std::endl;
	}	

	{
		std::cout << "--- Test crear array buit" << std::endl;
		Array<int> arrayBuit;
		std::cout << "   --- array size: " << arrayBuit.size() << std::endl;
		std::cout << std::endl;
	}	

	std::cout << "\n--- Test crear array n size" << std::endl;
	Array<int> arrayNSize(5);
	std::cout << "   --- array size: " << arrayNSize.size() << std::endl;
	std::cout << std::endl;

	std::cout << "--- Test inicializar array n size" << std::endl;
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

	std::cout << "\n--- Test accedir outofbounds array" << std::endl;
	try
	{
		std::cout << "   --- array: ";
		std::cout << "[" << arrayNSize[5] << "]";
	}
	catch (std::exception& e)
	{
		std::cout << "\nExcepció recollida: " << e.what() << std::endl;
	}
	
	return (0);
}


//// Notes:

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsayerza <jsayerza@student.42barcelona.fr> +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:00:00 by jsayerza          #+#    #+#             */
/*   Updated: 2025/11/04 17:00:00 by jsayerza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/iter.hpp"

void printInt(int x)
{
	std::cout << "[" << x << "]";
}

void duplicaInt(int& x)
{
	x *= 2;
}

void	test_int()
{
	std::cout << "--- Test int ---" << std::endl;
	int array[] = {1, 2, 3, 4, 5};
	size_t lenArray = 5;
	
	std::cout << "   --- Initial array" << std::endl;
	iter(array, lenArray, printInt);
	std::cout << std::endl;

	std::cout << "   --- Processed array: x2" << std::endl;
	iter(array, lenArray, duplicaInt);
	iter(array, lenArray, printInt);
	std::cout << std::endl;

	std::cout << "   --- Processed array incOne func by template using print func by type" << std::endl;
	iter(array, lenArray, incOne<int>);
	iter(array, lenArray, printInt);
	std::cout << std::endl;
	std::cout << "   --- Processed array incOne func by template using print func by template" << std::endl;
	iter(array, lenArray, printX<int>);
	std::cout << std::endl;
}


void printFloat(float x)
{
	std::cout << "[" << x << "]";
}

void duplicaFloat(float& x)
{
	x *= 2;
}

void	test_float()
{
	std::cout << "--- Test float ---" << std::endl;
	float array[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
	size_t lenArray = 5;
	
	std::cout << "   --- Initial array" << std::endl;
	iter(array, lenArray, printFloat);
	std::cout << std::endl;

	std::cout << "   --- Processed array: x2" << std::endl;
	iter(array, lenArray, duplicaFloat);
	iter(array, lenArray, printFloat);
	std::cout << std::endl;
}


void printChar(char x)
{
	std::cout << "[" << x << "]";
}

void toUpper(char& x)
{
	if (x >= 'a' && x <= 'z')
		x = x - 'a' + 'A';
}

void	test_char()
{
	std::cout << "--- Test char ---" << std::endl;
	char array[] = {'s', 'a', 'y', 'e', 'r'};
	size_t lenArray = 5;
	
	std::cout << "   --- Initial array" << std::endl;
	iter(array, lenArray, printChar);
	std::cout << std::endl;

	std::cout << "   --- Processed array: toUpper" << std::endl;
	iter(array, lenArray, toUpper);
	iter(array, lenArray, printChar);
	std::cout << std::endl;

	std::cout << "   --- Processed array incOne func by template using print func by type" << std::endl;
	iter(array, lenArray, incOne<char>);
	iter(array, lenArray, printChar);
	std::cout << std::endl;
	std::cout << "   --- Processed array incOne func by template using print func by template" << std::endl;
	iter(array, lenArray, printX<char>);
	std::cout << std::endl;	
}

void toUpperStr(std::string& str)
{
	int i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
		i++;
	}
}

void	test_str()
{
	std::cout << "--- Test str ---" << std::endl;
	std::string array[] = {"This", "is", "a", "pretty", "test"};
	size_t lenArray = 5;
	
	std::cout << "   --- Initial array" << std::endl;
	iter(array, lenArray, printX<std::string>);
	std::cout << std::endl;

	std::cout << "   --- Processed array: toUpperStr" << std::endl;
	iter(array, lenArray, toUpperStr);
	iter(array, lenArray, printX<std::string>);
	std::cout << std::endl;
}

void test_empty_array()
{
	std::cout << "--- Test empty array ---" << std::endl;
	int array[] = {};
	size_t lenArray = 0;

	std::cout << "   --- Initial array" << std::endl;
	iter(array, lenArray, printX<int>);
	std::cout << std::endl;

	std::cout << "   --- Processed array: x2" << std::endl;
	iter(array, lenArray, incOne<int>);
	iter(array, lenArray, printX<int>);
	std::cout << std::endl;
}


int	main(void)
{
	test_int();
	std::cout << std::endl;
	test_float();
	std::cout << std::endl;
	test_char();
	std::cout << std::endl;
	test_str();
	std::cout << std::endl;
	test_empty_array();
	std::cout << std::endl;

	return (0);
}


//// Notes:
//// template <typename T, typename F>
//// void iter(T& array, const size_t length, F& function)
//// - genèrica: F pot ser qualsevol cosa callable (funció, functor, lambda a C++11+)
//// - flexible: La funció pot tenir diferents signatures
//// - Accepta funcions const i no-const
//// - No obliga a fer servir referències (pot rebre per valor o referència)
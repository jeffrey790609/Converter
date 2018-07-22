#include <iostream>

#include "temperature_converter.h"
// I would like to extend this converter, so it could compute currencies, pressure etc.

int main()
{
	double output_value = temperature_converter();

	std::cout << "Received value: " << output_value;

	std::cout << ". . . press ENTER to continue . . .\n";
	std::cin.get();
	std::cin.get();
}

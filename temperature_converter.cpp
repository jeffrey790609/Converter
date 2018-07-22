#include "temperature_converter.h"

#include <iostream>

double celc_to_fahr(double celc)
{
	return 32.0 + (9.0 / 5.0 * celc);
}

double fahr_to_celc(double fahr)
{
	return 5.0 / 9.0 * (fahr - 32.0);
}

double kel_to_celc(double kel)
{
	return kel - 273.15;
}

double celc_to_kel(double celc)
{
	return celc + 273.15;
}

double fahr_to_kel(double fahr)
{
	return (fahr + 459.67) * 5.0 / 9.0;
}

double kel_to_fahr(double kel)
{
	return kel * 9.0 / 5.0 - 459.67;
}

double temperature_converter()
{
	double input_value;
	int option;
	bool correct = false;

	while (!correct)
	{
		std::cout << "Enter value you want to convert: ";
		std::cin >> input_value;
		if (std::cin.good())
			correct = true;
		else
			std::cout << "You entered incorrect value, try again!\n";
		std::cin.clear();
		std::cin.sync();
	}

	correct = false;

	while (!correct) {
		std::cout << "\n1]Celsius to Fahrenheit\n2]Fahrenheit to Celsius\n3]Celsius to Kelvin\n4]Kelvin to Celsius\n5]Fahrenheit to Kelvin\n6]Kelvin to Fahrenheit\n\nChoose your option: ";
		std::cin >> option;
		if (std::cin.good() && option > 0 && option < 7)
			correct = true;
		else
			std::cout << "You entered incorrect value, try again!\n";
		std::cin.clear();
		std::cin.sync();
	}

	switch (option)
	{
	case 1:
		return celc_to_fahr(input_value);
	case 2:
		return fahr_to_celc(input_value);
	case 3:
		return celc_to_kel(input_value);
	case 4:
		return kel_to_celc(input_value);
	case 5:
		return fahr_to_kel(input_value);
	case 6:
		return kel_to_fahr(input_value);
	default:
		std::cout << "Something went wrong!\n\n";
	}
	return 0;
}
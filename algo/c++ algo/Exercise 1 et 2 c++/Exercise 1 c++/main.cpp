// EXERCISE 1
#include "pch.h"
#include <iostream>

int main()
{
	// exercise 2
	int nombre1, nombre2;

	std::cout << "entrer un nombre: ";
	std::cin >> nombre1 >> nombre2;

	std::cout << "Hello World" << nombre1 << nombre2 << std::endl;

	std::cout << "la somme est: " << (nombre1 + nombre2) << std::endl;
	std::cout << "soustraction des deux nombre = " << (nombre1 - nombre2) << std::endl;
	std::cout << "la division = " << (nombre1 / nombre2) << std::endl;
	std::cout << "la mutiplication = " << (nombre1 * nombre2) << std::endl;
	std::cout << "le modulo = " << (nombre1 % nombre2) << std::endl;

	//exercise 1
	int note1, note2, note3;

	std::cout << "entrer une note: ";
	std::cin >> note1 >> note2 >> note3;

	std::cout << "Hello World, " << note1 << note2 << note3 << "\n";
	std::cout << "La moyenne est: " << (note1 + note2 + note3) / 3 << std::endl;

	system("pause");

	return 0;
}
#include <iostream> // Library for input/out stream
/// <summary>
/// this the entry point for the program.
/// </summary>
/// <returns> 0 = end with success. </returns>
int main()
{
	// declaration de variables pour contenir le nom de l'utilisateur
	char name[50];
	int age;

	std::cout << "Entrer votre nom: ";
	// attendre le input de l'utilisateur 
	std::cin >> name; 

	std::cout << "Entrer votre age: ";
	std::cin >> age;

	std::cout << "Hello World!" << name << std::endl;
	std::cout << "Ton age est: " << (age-5) << std::endl;
	


	system("pause");

	return 0;
}
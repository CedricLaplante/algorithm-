#include <iostream>

int main()
{
	// exercise number 7
	int nombre1 = 0;
	int nombre2 = 0;

	std::cout << "entrer deux nombres" << std::endl;
	std::cin >> nombre1 >> nombre2;

	if (nombre1 > nombre2)
	{
		std::cout << "Le nombre1 est plus grand que le nombre2 " << std::endl;
 	}
    if (nombre1 == nombre2)
    {
		std::cout << "Le nombre1 est egale au nombre2 " << std::endl;
	}
	if (nombre1 < nombre2)
	{
		std::cout << "Le nombre1 est plus petit que le nombre2" << std::endl;
	}


	// exercise number 8
	int chiffre1 = 0;
	int chiffre2 = 0;
	int chiffre3 = 0;

	std::cout << "Entrer trois chiffre" << std::endl;
	std::cin >> chiffre1 >> chiffre2 >> chiffre3;

		if (chiffre1 > chiffre2 && chiffre1 > chiffre3)
		{
			std::cout << "Le chiffre1 est plus grand que le chiffre2 et chiffre3" << std::endl;
		}
		if (chiffre1 < chiffre2 && chiffre2 < chiffre3)
		{
			std::cout << "Le chiffre2 est plus grand que le chiffre1 et chiffre3" << std::endl; 
		}
		if (chiffre1 < chiffre3 && chiffre3 > chiffre2)
		{
			std::cout << "Le chiffre3 est plus grand que le chiffre1 et chiffre2" << std::endl;
		}
		if (chiffre1 < chiffre2 && chiffre3 > chiffre2)
		{
			std::cout << "Le chiffre 1 est plus petit que le chiffre2 et le chiffre3 est plus grand que le chiffre2" << std::endl;
		}
		if (chiffre1 < chiffre3 && chiffre2 > chiffre3)
		{
			std::cout << "Le chiffre1 est plus petit que le chiffre3 et le chiffre2 est plus grand que le chiffre3" << std::endl;
		}
		if (chiffre1 > chiffre2 && chiffre1 < chiffre3)
		{
			std::cout << "Le chiffre1 est plus grand que le chiffre2 et le chiffre1 est plus petit que le chiffre3" << std::endl;
		}
		if (chiffre1 > chiffre3 && chiffre2 > chiffre1)
		{
			std::cout << "le chiffre1 est plus grand que le chiffre3 et le chiffre2 est plus grand que le chiffre1" << std::endl;
		}

		system("pause");
}
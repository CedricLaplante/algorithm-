#include<iostream>
	// exercise
int main()
{
	int nombre1 = 0;
	int nombre2 = 0;

	std::cout << "entrer deux nombre pour les comparer: ";
	std::cin >> nombre1 >> nombre2;

	if (nombre1 == nombre2)
	{
		std::cout << "Les nombres sont indentique" << std::endl;
	}
	else if (nombre1 < nombre2)
	{
		std::cout << "Le nombre1 est plus petit que le nombre2" << std::endl;
	}
	else if (nombre1 > nombre2)
	{
		std::cout << "Le nombre1 est plsu grand que le nombre2" << std::endl;
	}
	if (nombre1 <= nombre2)
	{
		std::cout << "Le nombre1 est plus petit ou egale au nombre2" << std::endl;
	}
	if (nombre1 >= nombre2)
	{
		std::cout << "Le nombre1 est plus grand ou egale au nombre2" << std::endl;
	}
	else if (nombre1 != nombre2)
	{
		std::cout << "Le nombre1 n'est pas pareille au nombre2" << std::endl; 
	}

	system("pause");
	return 0;
}
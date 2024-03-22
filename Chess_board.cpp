#include <iostream>
#include <iomanip>

int main()
{
	setlocale(LC_ALL, "ru");

	std::string letters[] { "a", "b", "c", "d", "e", "f", "g", "h" };
	int numbers[]{ 8, 7, 6, 5, 4, 3, 2, 1 };

	std::cout << "    ";
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::right << std::setw(2) << letters[i] << " ";
	}

	std::cout << "\n\n";

	for (int i = 0; i < 8; i++)
	{
		std::cout << std::right << std::setw(2) << numbers[i] << "  ";

		for (int j = 0; j < 8; j++)
		{
			std::cout << letters[j] << numbers[i] << " ";
		}
		std::cout << " " << numbers[i] << "\n";
	}

	std::cout << "\n    ";
	for (int i = 0; i < 8; i++)
	{
		std::cout << std::right << std::setw(2) << letters[i] << " ";
	}
	
	std::cout << "\n";

	return 0;
}
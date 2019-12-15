#include <iostream>
#include <ctime>

clock_t czas;

int menuChoice;
void fibonacci(int size) {
	long long a = 1, b = 0;
	for (int i = 0; i < size; i++) {
		std::cout << b << " ";
		b += a;
		a = b - a;
	}
	czas = clock();
}
long long int fibonacci_rec(int size) {
	if (size == 0) return 0;
	if (size == 1) return 1;
	czas = clock();
	return fibonacci_rec(size - 1) + fibonacci_rec(size - 2);
}
void menu() {
	
	system("cls");
	std::cout << "===[FIBONACCI]===" << std::endl;
	std::cout << "1. Iterative" << std::endl;
	std::cout << "2. Recursive" << std::endl;
	std::cout << "0. EXIT" << std::endl;
	std::cin >> menuChoice;
}
int main()
{
	int size;
	menu();
	do {
		switch (menuChoice)
		{
		case 1: {
			std::cout << "Enter the number: ";
			std::cin >> size;
			fibonacci(size);
			std::cout << std::endl << "czas wykonania: " << czas << "ms" << std::endl;
			system("pause");
			menu();
		}
		case 2: {
			std::cout << "Enter the number: ";
			std::cin >> size;
			for (int i = 0; i < size; i++) {
				std::cout << fibonacci_rec(i) << " ";
			}
			std::cout << std::endl;
			std::cout << std::endl << "czas wykonania: " << czas << "ms" << std::endl;
			system("pause");
			menu();
		}
		default:
			break;
		}
	} while (menuChoice != 0);
}

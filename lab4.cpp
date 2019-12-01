#include <iostream>

int menuChoice;
void fibonacci(int size) {
	long long a = 1, b = 0;
	for (int i = 0; i < size; i++) {
		std::cout << b << " ";
		b += a;
		a = b - a;
	}
}
long long int fibonacci_rec(int size) {
	if (size == 0) return 0;
	if (size == 1) return 1;
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
			system("pause");
			menu();
		}
		default:
			break;
		}
	} while (menuChoice != 0);
}

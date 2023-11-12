#include <iostream>

int main()
{
	setlocale(LC_ALL, "Turkish");

	int a = 5;
	int *ptr;
	ptr = &a;
	std::cout << "ptr = &a : " << ptr << std::endl;

	*ptr = a; 
	std::cout << "*ptr = a : " << *ptr << std::endl;

	ptr = &a + 1;

	std::cout << "ptr = &a : " << ptr << std::endl;

	*ptr = a + 1;
	std::cout << "*ptr = a : " << *ptr << std::endl;

}
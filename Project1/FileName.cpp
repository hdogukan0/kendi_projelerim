#include <iostream>
#include <cstring>
#include <string>
#include <cmath>
#include <iomanip>



int main()
{
	setlocale(LC_ALL, "Turkish");
	
		
		char dizi[50];
		int *ptr;
		int i,n;
		std::cout << "Ayýrtmak Ýstdeðin Bölme Sayýsý \n";
		std::cin >> i;
		ptr = new int[i];

		for (n = 0; n < i; n++)
		{
			std::cout << "Bölme : " << n + 1 << std::endl;
			std::cin >> dizi;
			ptr[n] = atoi(dizi);

		}
		for (n = 0; n < i; n++)
		{
			std::cout << ptr[n] << std::endl;
		}
		delete[] ptr;
		std::cout << "Yer Bilgisayara Geri Verildi \n";
	


}
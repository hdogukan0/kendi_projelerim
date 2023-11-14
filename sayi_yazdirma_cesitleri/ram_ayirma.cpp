#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	char dizi[100];
	int* p;
	int i, n, sayi;
	setlocale(LC_ALL, "Turkish");
	cout << "Ramda Kaç Bölüm Ayırtmak İstiyorsunuz. " << endl;
	cin >> n;
	cout << "\n";

	p = new int[n];

	for (i = 0; i < n; i++)
	{
		cout << i + 1 << ". Sayı : " << endl;
		cin >> dizi;
		p[i] = atoi(dizi);
	}
	
	cout << "Girilen Değerler : " << endl;

	for (i = 0; i < n; i++)
	{
		cout << p[i] << endl;
	}

	cout << "Ayrılan Yerler Silindi. " << endl;
	delete[] p;

	return 0;
}
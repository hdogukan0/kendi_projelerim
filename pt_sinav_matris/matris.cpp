#include <iostream>

using namespace std;

int main()
{
	int a[5][5];
	int b[5][5];

	setlocale(LC_ALL, "Turkish");

	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cout << "Ýlk Elemaný Gininiz a : "; cin >> a[i][j];
			cout <<  "Ýkinci Elemaný Gininiz b : "; cin >> b[i][j];
		}

	}
	int buyuk = a[0][0];
	int bsatir = 0;
	int bsutun = 0;

	for (int k = 0; k < 5; k++)
	{
		for (int m = 0; m < 5; m++)
		{

			if (a[k][m] > buyuk)
			{
				buyuk = a[k][m];
				bsatir = k;
				bsutun = m;
				
			}
		}
	}
	
	int kucuk = b[0][0];
	int ksatir = 0;
	int ksutun = 0;


	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{
			if (b[x][y] < kucuk)
			{
				kucuk = b[x][y];
				ksatir = x;
				ksutun = y;

			}
		}
	}

	int yedek;
	int yedek1;
	a[bsatir][bsutun] = kucuk;
	b[ksatir][ksutun] = buyuk;

	yedek = kucuk;
	yedek1 = buyuk;


	cout << "ilk matrise yazýlan 2. matrisin en kücük elemaný :" << yedek << "\n";
	cout <<	"ikinci matrise yazýlan 1. matrisin en büyük elemaný : " << yedek1 << "\n";



	return 0;



}
	

	
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish"); //cout t�rnak i�inde yaz�lan yaz�lar�n bozulmadan t�rk�e yaz�lmas�n� sa�l�yor.

	double fakt, us, result; //fakt = faktoriyel, us = �ss�, result  = sonu�.


	for (int i = 1; i <= 10; i++) //Soru da:  alan�n de�erlerinin tekrar �s ile ayr� ayr� �arpmas� s�yledi�i i�in 2 d�ng� a��l�yor ilk d�ng� �s i�in 
	{
		fakt = 1;
		for (int j = 1; j <= i; j++) // A��lan 2.d�ng�de say�n�n fakt�riyeli bulunuyor say�m�z =10. 
		{
			fakt = fakt * j; // �lk d�ng� her d�ng���nde bu d�ng�de 1 kez �al���r. orne�in  3.kez d�nen d�ng�de 2 = 2*3 4.d�ng�de 6 = 6*4 b�yle devam eder.
			//��lem her devam etti�inde fakt�n i�ine yeni de�eri atan�r.
		}
		us = pow(2, i); // burda ussu al�yoruz yani pow i�lemi �ss� almaya yarar ilk k�s�m ana say� 2.si �ss� yani burada 2^i.
		result = us / fakt; //burada her d�ng�de sonu� de�i�kenine faktoriyel ile uss�n b�lme i�lemi at�yoruz.
	    cout << "Sonuc : " << result << endl; // 
	
	}

	

	return 0;
}
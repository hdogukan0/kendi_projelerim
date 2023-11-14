#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Turkish"); //cout týrnak içinde yazýlan yazýlarýn bozulmadan türkçe yazýlmasýný saðlýyor.

	double fakt, us, result; //fakt = faktoriyel, us = üssü, result  = sonuç.


	for (int i = 1; i <= 10; i++) //Soru da:  alanýn deðerlerinin tekrar üs ile ayrý ayrý çarpmasý söylediði için 2 döngü açýlýyor ilk döngü üs için 
	{
		fakt = 1;
		for (int j = 1; j <= i; j++) // Açýlan 2.döngüde sayýnýn faktöriyeli bulunuyor sayýmýz =10. 
		{
			fakt = fakt * j; // Ýlk döngü her döngüðünde bu döngüde 1 kez çalýþýr. orneðin  3.kez dönen döngüde 2 = 2*3 4.döngüde 6 = 6*4 böyle devam eder.
			//Ýþlem her devam ettiðinde faktýn içine yeni deðeri atanýr.
		}
		us = pow(2, i); // burda ussu alýyoruz yani pow iþlemi üssü almaya yarar ilk kýsým ana sayý 2.si üssü yani burada 2^i.
		result = us / fakt; //burada her döngüde sonuç deðiþkenine faktoriyel ile ussün bölme iþlemi atýyoruz.
	    cout << "Sonuc : " << result << endl; // 
	
	}

	

	return 0;
}
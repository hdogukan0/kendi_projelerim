#include <iostream>
#include <string>

using namespace std;

class ogrenci
{

	int numara;
	int yas;
	string ad;
	string soyad;
	string bolum;
public:

	ogrenci(int n, int y, string a, string sa, string bo);
	~ogrenci();
	void goruntule();


};

ogrenci::ogrenci(int n, int y, string a, string sa, string bo)
{
	numara = n;
	yas = y;
	ad = a;
	soyad = sa;
	bolum = bo;

}
ogrenci::~ogrenci()
{
	//
}
void ogrenci::goruntule()
{
	cout <<"Numara : " << numara
		<< " Yas   : " << yas
		<< " Ad    : " << ad
		<< " Soyad : " << soyad
		<< " Bolum : " << bolum;
}

int main()
{
	int a, b;
	string ad, sy, blm;
	setlocale(LC_ALL, "Turkish");

	cout << "Gerekli Alanlarý Doldurunuz \n \n";
	cout << "Numara : "; cin >> a; cout << "\n";
	cout << "Yas    : "; cin >> b; cout << "\n";
	cout << "Ad     : "; cin >> ad; cout << "\n";
	cout << "Soyad  : "; cin >> sy; cout << "\n";
	cout << "Bolum  : "; cin >> blm; cout << "\n";

	ogrenci og(a, b, ad, sy, blm);
	og.goruntule();



}


#include <iostream>
#include <cmath>
#include <cstring>
#include <string>
#include <iomanip>
using namespace std;

void toplam(int x, int y)
{
	setlocale(LC_ALL, "Turkish");
	double ort;
	ort = (x + y) / 2;
	cout << "Aritmetik Ortalama : " << ort << endl;

}
void kuvvet(int i, int j)
{
	setlocale(LC_ALL, "Turkish");
	int us;
	us = pow(i, j);
	cout << "Üssülü Sonucu : " << us << endl;
}

int main()
{
	setlocale(LC_ALL, "Turkish");

	int e, f;

	cout << "Ýlk Sayýyý Giriniz    : "; cin >> e; cout << "\n";
	cout << "Ýkinci Sayýyý Giriniz : "; cin >> f; cout << "\n";

	toplam(e, f);
	kuvvet(e, f);



	return 0;
}
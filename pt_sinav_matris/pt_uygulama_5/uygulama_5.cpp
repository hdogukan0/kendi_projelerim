#include <iostream>
#include <cmath>
using namespace std;

int a, b, c;

int main()
{
	setlocale(LC_ALL, "Turkish");

	const double pi = 3.14;
	int d, e, f;
	int toplam;
	int carp�m;
	double kalan;

	cout << "Say�lar� Giriniz ." << endl;
	cout << "A : "; cin >> a; cout << endl;
	cout << "B : "; cin >> b; cout << endl;
	cout << "C : "; cin >> c; cout << endl;
	cout << "D : "; cin >> d; cout << endl;
	cout << "E : "; cin >> e; cout << endl;
	cout << "F : "; cin >> f; cout << endl;

	toplam = a + b + c + d + e + f;
	cout << "Toplamlar� : " << toplam << endl;

	carp�m = toplam * pi;
	cout << "Pi x Toplamlar� : " << carp�m << endl;

	kalan = carp�m % 7;
	cout << "Carp�mlar� / 7 Kalan� : " << kalan << endl;

	return 0;
}
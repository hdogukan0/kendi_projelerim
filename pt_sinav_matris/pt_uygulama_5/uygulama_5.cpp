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
	int carpým;
	double kalan;

	cout << "Sayýlarý Giriniz ." << endl;
	cout << "A : "; cin >> a; cout << endl;
	cout << "B : "; cin >> b; cout << endl;
	cout << "C : "; cin >> c; cout << endl;
	cout << "D : "; cin >> d; cout << endl;
	cout << "E : "; cin >> e; cout << endl;
	cout << "F : "; cin >> f; cout << endl;

	toplam = a + b + c + d + e + f;
	cout << "Toplamlarý : " << toplam << endl;

	carpým = toplam * pi;
	cout << "Pi x Toplamlarý : " << carpým << endl;

	kalan = carpým % 7;
	cout << "Carpýmlarý / 7 Kalaný : " << kalan << endl;

	return 0;
}
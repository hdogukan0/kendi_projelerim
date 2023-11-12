#include <iostream>

using namespace std;


class uzunluk
{	

public:
	string x;

	void yazdir(string gv)
	{
		cout << "Sifre Uzunlugu Guvenlik "<< gv << " : "; cin >> x; cout << "\n";

	}
	string z;
	void ad()
	{
		
		cout << "Adinizi Giriniz : "; cin >> z; cout << "\n";

	}
	string y;
	void rutbe()
	{

		cout << "Rutbenizi Giriniz : "; cin >> y; cout << "\n";

	}

};



int main()
{
	setlocale(LC_ALL, "Turkish");
	string sy[4]{"Bir", "Ýki", "Üç", "Dört"};
	uzunluk u;
	u.x;
	u.ad();
	u.rutbe();
	
	u.yazdir(sy[0]);
	cout << "\n";
	int da = u.x.length();
		
	if (da == 3)
	{
		u.yazdir(sy[1]);
		int k1;
		k1 = u.x.length();
		if (k1 == 10)
		{
			u.yazdir(sy[2]);
			int k2;
			k2 = u.x.length();
			if (k2 == 5)
			{
				u.yazdir(sy[3]);
				int k3;
				k3 = u.x.length();
				if (k3 == 7)
				{
					cout << "Giriþ Baþarýlý Hoþgeldin MÝT : Milli Ýstihbarat Teþkilatý Rütbe : " <<  u.y << " " << "Ad : " << u.z << endl;

				}
			}
		}
	}


		

	
	cout << "\n";
	return 0;


}
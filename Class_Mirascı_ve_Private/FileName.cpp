#include <iostream>

using namespace std;


class payment
{
public:
	// private sadece o class �zel public heryerden kullan�labilir demek protected mirasc� demektir baska bir class a �a�r�labilir.
	float tutar;
	string parabirimi;
	string hasCode = "123456";

	 payment(bool f, string a)// kurucu function 1
	 {
		 tutar = 1.2;
		 parabirimi = "TL";
		 cout << a << endl;
	 }
	 payment(bool f) // kurucu function 2
	 {

	 }

	 payment()// kurucu function 3
	 {
		 
	 }
	 ~payment() // Y�k�c� Method
	 {
		 cout << "Bitti Thanks." << endl;
	 }

	void yaz()
	{
		cout << "�deme Yap�ld� . " << endl;
	}

};


int main()
{
	
	setlocale(LC_ALL, "Turkish");
	
	payment pay(true, "Salam Dunya Ben Makassa"); // Burada pay' in parantezinin i�ine bir�ey yazmaz ve parantezi kald�r�rsak sadece yukar�da bo� function olan paymenti al�r. e�er sadece true kal�rsa tekk boollu function� al�r
	pay.tutar = 2.5;
	pay.parabirimi = "$";
	pay.yaz();
	return 0;


}
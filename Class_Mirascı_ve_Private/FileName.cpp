#include <iostream>

using namespace std;


class payment
{
public:
	// private sadece o class özel public heryerden kullanýlabilir demek protected mirascý demektir baska bir class a çaðrýlabilir.
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
	 ~payment() // Yýkýcý Method
	 {
		 cout << "Bitti Thanks." << endl;
	 }

	void yaz()
	{
		cout << "Ödeme Yapýldý . " << endl;
	}

};


int main()
{
	
	setlocale(LC_ALL, "Turkish");
	
	payment pay(true, "Salam Dunya Ben Makassa"); // Burada pay' in parantezinin içine birþey yazmaz ve parantezi kaldýrýrsak sadece yukarýda boþ function olan paymenti alýr. eðer sadece true kalýrsa tekk boollu functioný alýr
	pay.tutar = 2.5;
	pay.parabirimi = "$";
	pay.yaz();
	return 0;


}
#include <iostream>

using namespace std;

class Silah
{
public:
	string isim;
	int mermiKapasitesi;
};

class M4A1 : public Silah
{
public:
	bool durbun;
	bool seriTek;
	int kayisUzunlugu;

	void kYazdirma(int z)
	{
		cout << "----------------------------" << endl;
		cout << "Kayis Uzunlugu : " << z << endl;
		cout << "----------------------------" << endl;

	}

	void iYazdirma(int x)
	{
		cout << "----------------------------" << endl;
		cout << "Mermi Kapasitesi : " << x << endl;
		cout << "----------------------------" << endl;

	}

	void yazdirma(string y)
	{
		cout << "-----" << endl;
		cout << y << endl;
		cout << "-----" << endl;
	}

};

class Glock : public Silah
{
public:
	int sarjorSayisi;
	
	void iYazdir(int y)
	{
		cout << "-----" << endl;
		cout << y << endl;
		cout << "-----" << endl;
	}

	void yazdir(string x)
	{
		cout << "-----" << endl;
		cout << x << endl;
		cout << "-----" << endl;
	}

};

class DesertEagle : public Silah
{
	bool seriTek;
	int kayisUzunlugu;
	int kurmaPozisyonu;

	void atesEt(string z)
	{
		cout << "-----" << endl;
		cout << z << endl;
		cout << "-----" << endl;
	}

};


int main()
{

	setlocale(LC_ALL, "Turkish");

	string aldý = "aldý";
	string almadý = "almadý";
	char secenek;
	char SeriTek;
	char durbun;
	char silme;
	
	//Üstten alt bilgi alma örneðin M4A1 in içindeki silah sýnýfýna M4A1 e verdiðimiz m4 deðiþkeninden çekiyoruz yani m4.isim bu nedenle hata çýkabilir,
	//
	//Örnek : Glock gl;  = gl.isim;
	//Glock gl;
	//Silah* silahptr = &gl ; // burada Silah sýnýfýný bir pointera atayýp o pointerýda glock sýnýfýna atadýk bilgiyi alttan üste doðru alýyoruz örnek alt satýrlarda
	//switch de 2. case de.
	

	trying:
	Silah silah;
	M4A1 m4;
	cout << "\n";
	cout << "\n";
	cout << "Silahýnýzýn Seçeneðini Giriniz M4A1: m, Glock: g, DeserEagle: d  : ";
	cin >> secenek;
	cout << "\n";
	cout << "\n";
	M4A1 *m4ptr = &m4;
	
	Glock gl;
	Silah *silahptr = &gl; //Sadece Glock sýnýfýndaki silahýn deðerlerini deðiþtiririz. 
	Glock* glptr = (Glock*)&silah;


	switch (secenek)
	{

	case 'm': //1. case
		
		cout << "M4A1 Bellek Adresi *m4ptr : " << m4ptr << "  &m4 : " << &m4 << endl;
		cout << "\n";
		m4.isim = "ASKERÝ  Tüfek M4A1 . ";
		m4.yazdirma(m4.isim);

	 basadon:
		cout << "\n";

		cout << "-----------------------------------------------------" << endl;
		cout << "M4A1 Tüfeðinin Dürbününü Aktif Etmek Ýstermisin  E/H" << endl;
		cout << "-----------------------------------------------------" << endl;
		cout << "E/H : "; cin >> durbun; cout << "\n";
		if (durbun == 'E' || durbun == 'e')
		{
			m4.durbun == true;
			m4.yazdirma(aldý);
		}
		else if (durbun == 'H' || durbun == 'h')
		{
			m4.durbun = false;
			m4.yazdirma(almadý);
		}
		else
		{
			goto basadon;
		}

		cout << "\n";

		cout << "---------------------------------------" << endl;
		cout << "Silahýnýzýn Mermi Kapasitesini Giriniz" << endl;
		cout << "---------------------------------------" << endl;
		cout << "Kapasite : ";  cin >> m4.mermiKapasitesi; cout << "\n";
		m4.iYazdirma(m4.mermiKapasitesi);

		cout << "\n";

		cout << "---------------------------------------------------------------------" << endl;
		cout << "M4A1 Tüfeðinin Atýþ Þeklini Seçininiz Seri : S veya s, Tek : T veya s" << endl;
		cout << "---------------------------------------------------------------------" << endl;
		cout << "S/T : ";  cin >> SeriTek; cout << "\n";
		if (SeriTek == 'S' || SeriTek == 's')
		{
			m4.seriTek = true;
			m4.yazdirma("Seri");
		}
		else if (SeriTek == 'T' || SeriTek == 't')
		{
			m4.seriTek = false;
			m4.yazdirma("Tek");
		}

		cout << "\n";

		cout << "---------------------------------------" << endl;
		cout << "Silahýnýzýn Kayýþ Uzunluðunu Giriniz " << endl;
		cout << "---------------------------------------" << endl;
		cout << "Uzunluk : ";  cin >> m4.kayisUzunlugu; cout << "\n";
		m4.kYazdirma(m4.kayisUzunlugu);

		cout << "\n";

		cout << "-----------------------------------------------" << endl;
		cout << "Sýradaki Silahý Düzenlemek Ýçin S tuþuna Basýp Enterlayýn." << endl;
		cout << "-----------------------------------------------" << endl;
		cin >> silme; cout << "\n";
		if (silme == 'S' || silme == 's')
		{
			system("cls");

		}

		cout << "\n";
		break; 

		/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

	case 'g': //2. case

		cout << "Glock Tabancasýnýn Bellek Adresi : " << silahptr << "\ " << &gl << "\ " << &silahptr << endl;
		cout << "\n";
		silahptr->isim = "Otomatik Tabanca GLOCK-18";
		glptr->yazdir(silahptr->isim);

		cout << "\n";

		cout << "-----------------------------------------------" << endl;
		cout << "Glock Tabancasýnýn Mermi Kapasitesini Giriniz." << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "Mermi Kapasitesi : "; cin >> silahptr->mermiKapasitesi; cout << "\n";
		glptr->iYazdir(silahptr->mermiKapasitesi);

		cout << "\n";

		cout << "-----------------------------------------------" << endl;
		cout << "Glock Tabancasýnýn Þarjör Sayýsýný Giriniz." << endl;
		cout << "-----------------------------------------------" << endl;
		cout << "Þarjör Sayýsý : "; cin >> glptr->sarjorSayisi;  cout << "\n";
		glptr->iYazdir(glptr->sarjorSayisi);

		cout << "\n";

		cout << "-----------------------------------------------" << endl;
		cout << "Sýradaki Silahý Düzenlemek Ýçin S tuþuna Basýp Enterlayýn." << endl;
		cout << "-----------------------------------------------" << endl;
		cin >> silme; cout << "\n";
		if (silme == 'S' || silme == 's')
		{
			system("cls");

		}

		cout << "\n";
		break;


	case 'd':
		break;
	default:
		cout << "Geçersiz Silah Türü. Tekrar Giriniz." << endl;
		goto trying;

		break;
	}


	return 0;
}
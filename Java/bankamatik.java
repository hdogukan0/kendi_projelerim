package ders2020;

import java.util.Scanner;

public class bankamatik {
	static Scanner input = new Scanner(System.in);
	static int bakiye = 1000;
	static double kredi;
	static double ayliktaksit;
	static int taksit;
	public static void main(String[] args)
	{
		String adSoyad = adSoyadAl();
		int secenek;
		do {
			
			mesaj("\n------------------------------------");
			mesaj(adSoyad +" " +bakiye);
			
			menu();
			mesaj("------------------------------------\n");
			
			secenek = secenekAl();
			
			kontrol(secenek);
			
			yonlendir();
			
		}while(secenek != 5);
		
	}
	
	public static void mesaj(String message)
	{
		System.out.println(message);
	}
	
	public static String adSoyadAl()
	{
		String ad, pass;
		mesaj("Merhaba, İlerlemek için Lütfen Adınızı ve Şifrenizi Giriniz.\n");
		mesaj("Adınızı giriniz");
		ad = input.next();
		mesaj("Şifrenizi Giriniz");
		pass = input.next();
		
		return ad +" ";
		
	}
	
	public static void menu()
	{
		mesaj("Menü ;\n1) Para Yatırma\n2) Para Çekme\n3) Kredi\n4) Borç Ödeme\n5) Çıkış");
	}
	
	public static int secenekAl()
	{
		int secenek;
		System.out.print("Bir Seçenek Giriniz : ");
		secenek = input.nextInt();
		mesaj(" ");
		return secenek;
	}
	
	public static void kontrol(int x)
	{
		if(x == 1)
		{
			bakiye = yatirma();
		}
		else if(x == 2)
		{
			bakiye = cekme();
		}
		else if(x == 3)
		{
			kredi();
		}
		else if(x == 4)
		{
			borc();
		}
		else if(x == 5)
		{
			mesaj("Çıkış İşlemi Başarılı\n");
		}
	}
	
	public static int yatirma()
	{
		mesaj("***********************************************************");
		mesaj("Para Yatırma İşlemini Seçtiniz. Mevcut Bakiye = " +bakiye);
		int ytr;
		mesaj("Yatırmak İstediğiniz Tutarı Giriniz\n");
		ytr = input.nextInt();
		bakiye = bakiye + ytr;
		mesaj("\nPara Yatırma İşleminiz Başarı ile Gerçekleşti.\n");
		mesaj("***********************************************************");
		return bakiye;
	}
	
	public static int cekme()
	{
		mesaj("***********************************************************");
		mesaj("Para Çekme İşlemini Seçtiniz. Mevcut Bakiye = " +bakiye);
		int ckm;
		mesaj("Çekmek İstediğiniz Tutarı Giriniz\n");
		ckm = input.nextInt();
		if(bakiye < ckm)
		{
			mesaj("\nYetersiz Bakiye\n");
		}
		else
		{
			bakiye = bakiye - ckm;
			mesaj("\nPara Çekme İşleminiz Başarı ile Gerçekleşti.\n");
		}
		mesaj("***********************************************************");
		return bakiye;
	}
	public static void kredi()
	{
		mesaj("Kredi Miktarını Giriniz");
		kredi = input.nextDouble();
		
		mesaj("Taksit Sayısını Giriniz");
		taksit = input.nextInt();
		
		double faizOran = 3.5;
		ayliktaksit = (kredi * faizOran * taksit)/100;
		mesaj("Faiz Farkı " +ayliktaksit +" TL");
		mesaj("Toplam Odeme " +(kredi+ayliktaksit) +" TL");
	}
	
	public static void borc()
	{
		
		mesaj("Toplam Borç " +(kredi+ayliktaksit) +" TL");
		mesaj("Aylık Ödeme " +((kredi+ayliktaksit)/taksit));
		mesaj("Miktar Giriniz");
		int odeme = input.nextInt();
		if(odeme <= bakiye)
		{
			mesaj("Ödeme İşlemi Başarılı");
			bakiye -= odeme;
			
		}
		else {
			mesaj("Yetersiz Bakiye");
		}
		
	}
	
	public static void yonlendir()
	{
		mesaj("\nMenüye Yönlendiriliyorsunuz... \n");
	}

}

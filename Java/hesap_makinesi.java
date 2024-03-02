package deneme;

import java.util.Scanner;

public class hesap_makinesi {
	static Scanner input = new Scanner(System.in);
	public static void main(String[] args)
	{
		double a, b;
		char islem;
		mesaj("İlk Sayıyı Giriniz");
		a = input.nextDouble();
		mesaj("Yapılacak işlemi seçiniz |*|/|-|+|");
		islem = input.next().charAt(0);
		mesaj("İkinci Sayıyı Giriniz");
		b = input.nextDouble();
		
		double sonuc = 0;
		
		if(islem == '+')
		{
			sonuc = toplama(a, b);
		}
		else if(islem == '-')
		{
			sonuc = cikarma(a, b);
		}
		else if(islem == '/')
		{
			sonuc = bolme(a, b);
		}
		else if(islem == '*')
		{
			sonuc = carpma(a, b);
		}
		else
		{
			mesaj("Geçersiz Bir İşlem Girdiniz");
		}
		mesaj("İşleminizin Cevabı = ");
		System.out.print(sonuc);
		
	}
	
	public static void mesaj(String message)
	{
		System.out.println(message);
	}
	
	public static double toplama(double x, double y)
	{
		double sonuc = x  + y;
		return sonuc;
	}
	
	public static double carpma(double x, double y)
	{
		double sonuc = x  * y;
		return sonuc;
	}
	
	public static double bolme(double x, double y)
	{
		double sonuc = x  / y;
		return sonuc;
	}
	
	public static double cikarma(double x, double y)
	{
		double sonuc = x  - y;
		return sonuc;
	}
	

}

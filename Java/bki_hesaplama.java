package deneme;

import java.util.Scanner;

public class bki_hesaplama {

	static Scanner input = new Scanner(System.in);
	
	public static void main(String[] args) {
				
		double kg;
		double boy;
		mesajVer("Boyunuzu Giriniz (Metre)");
		boy = input.nextDouble();
		mesajVer("Kilonuzu Giriniz");
		kg = input.nextDouble();
		
		double sonuc = bki(kg, boy);
		mesajVer("BKI = " +sonuc);
		
		kontrol(sonuc);
		
	}
	
	public static void mesajVer(String messages)
	{
		System.out.println(messages);
	}
	
	public static double bki(double x, double y)
	{
		double sonuc;
		
		sonuc = x / (y*y);
		
		return sonuc;
	}
	
	public static void kontrol(double z)
	{
		if(z < 18)
		{
			mesajVer("Zayıf");
		}
		else if(z < 25)
		{
			mesajVer("Normal");
		}
		else if(z < 30)
		{
			mesajVer("Hafif Şişman");
		}
		else if(z < 35)
		{
			mesajVer("Şişman");
		}
		else
		{
			mesajVer("1. Derece obez");
		}
	}

}

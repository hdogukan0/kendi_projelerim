package deneme;

import java.util.Scanner;

public class dat {
	static double bakiye = 0;
	static Scanner input = new Scanner(System.in);
	public static void main(String[] args)
	{
		/*mesaj("Switch 1, if else 2");
		int b = input.nextInt();
		mesaj("Bir Sayı Giriniz");
		int a = input.nextInt();
		if(b==1)
		{
			mesaj("Switch işlemini seçtiniz");
			swtch(a);
		}
		else if(b == 2)
		{
			mesaj("ifElse işlemini seçtiniz");
			ifElse(a);
		}
		else
		{
			mesaj("Geçersiz İşlem");
		}
		
		
		double a, b;
		char islem;
		mesaj("İlk Sayıyı Giriniz");
		a = input.nextDouble();
		mesaj("Yapılacak işlemi seçiniz |*|/|-|+|");
		islem = input.next().charAt(0);
		mesaj("İkinci Sayıyı Giriniz");
		b = input.nextDouble();
		
		double sonuc = 0;
		
		
		switch(islem) 
		{
		case '+':
			sonuc = toplama(a, b);
			break;
		case '-':
			sonuc = cikarma(a, b);
			break;
		case '*':
			sonuc = carpma(a, b);
			break;
		case '/':
			sonuc = bolme(a, b);
			break;
		default:
			mesaj("Geçersiz işlem türü");
			break;
		}
		

		mesaj("İşleminizin Cevabı = ");
		System.out.print(sonuc);
		
		mesaj("Menu\n1-)yemekler\n2-)içecekler\n3-)tatlılar");
		int secenek = input.nextInt();
		if(secenek == 1)
		{
			yemek();
		}
		else if(secenek == 2)
		{
			icecek();
		}
		else if(secenek == 3)
		{
			deserts();
		}
		else
		{
			mesaj("geçersiz işlem");
		}
		*/
		
		
	}
		
	
	
	public static void mesaj(String message)
	{
		System.out.println(message);
	}
	public static void swtch(int x)
	{
		int d;
		mesaj("1-7 arası sayı girisiniz");
		d = input.nextInt();
		switch(x)
		{
		case 1:
			mesaj("Ocak");
			dayS(d);
			break;
		case 2:
		 	mesaj("Şubat");
			dayS(d);
		 	break;
		case 3:
			mesaj("mart");
			dayS(d);
			break;
		case 4:
			mesaj("nisan");
			dayS(d);
			break;
		case 5:
			mesaj("mayıs");
			dayS(d);
			break;
		case 6:
			mesaj("haziran");
			dayS(d);
			break;
		case 7:
			mesaj("temmuz");
			dayS(d);
			break;
		case 8:
			mesaj("ağustos");
			break;
		case 9:
			mesaj("eylül");
			break;
		case 10:
			mesaj("ekim");
			dayS(d);
			break;
		case 11:
			mesaj("kasım");
			dayS(d);
			break;
		case 12:
			mesaj("aralık");
			dayS(d);
			break;
			default:
				mesaj("Geçersiz İşlem");
				break;
		}
	}

	public static void ifElse(int z)
	{
		mesaj("1-7 arası sayı giriniz if");
		int y = input.nextInt();
		if(z == 1)
		{
			mesaj("ocak");
			dayIf(y);
		}
		else if(z == 2)
		{
			mesaj("şubat");
			dayIf(y);
		}
		else if(z == 3)
		{
			mesaj("mart");
			dayIf(y);
		}
		else if(z == 4)
		{
			mesaj("nisan");
			dayIf(y);
		}
		else if(z == 5)
		{
			mesaj("mayıs");
			dayIf(y);
		}
		else if(z == 6)
		{
			mesaj("haziran");
			dayIf(y);
		}
		else if(z == 7)
		{
			mesaj("temmuz");
			dayIf(y);
		}
		else if(z == 8)
		{
			mesaj("ağustos");
			dayIf(y);
		}
		else if(z == 9)
		{
			mesaj("eylül");
			dayIf(y);
		}
		else if(z == 10)
		{
			mesaj("ekim");
			dayIf(y);
		}
		else if(z == 11)
		{
			mesaj("kasım");
			dayIf(y);
		}
		else if(z == 12)
		{
			mesaj("aralık");
			dayIf(y);
		}
		else
		{
			mesaj("Geçersiz İşlem");
		}
	}
	
	
	public static void dayS(int c)
	{
		switch(c)
		{
		case 1:
			mesaj("Pazartesi");
			break;
		case 2:
			mesaj("Salı");
			break;
		case 3:
			mesaj("Çarşamba");
			break;
		case 4:
			mesaj("Perşembe");
			break;
		case 5:
			mesaj("Cuma");
			break;
		case 6:
			mesaj("Cumartesi");
			break;
		case 7:
			mesaj("Pazar");
			break;
			default:
				mesaj("Geçersiz Sayı");
				break;
		}
	}
	
	public static void dayIf(int g)
	{
		
		if(g == 1)
		{
			mesaj("Pazartesi");
		}
		else if(g == 2)
		{
			mesaj("Salı");
		}
		else if(g == 3)
		{
			mesaj("Çarşamba");
		}
		else if(g == 4)
		{
			mesaj("Perşembe");
		}
		else if(g == 5)
		{
			mesaj("Cuma");
		}
		else if(g == 6)
		{
			mesaj("cumatesi");
		}
		else if(g == 7)
		{
			mesaj("pazar");
		}
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
	
	public static void yemek()
	{
		mesaj("Bakiye giriniz");
		bakiye = input.nextDouble();
		int ymk;
		mesaj("1-)Tavuk Pilav\n2-)Lahmacun\n");
		int s =input.nextInt();
		switch(s)
		{
		case 1:
			mesaj("Tavuk Pilav Ücret giriniz");
			ymk = input.nextInt();
			bakiye = bakiye - ymk;
			mesaj("Mevcut Bakiyeniz = " +bakiye);
			break;
		case 2:
			mesaj("Lahmacun Ücret giriniz");
			ymk = input.nextInt();
			bakiye = bakiye - ymk;
			mesaj("Mevcut Bakiyeniz = " +bakiye);
			break;
			default:
				mesaj("geçerli sayı giriniz");
				break;
		}
	}
	
	public static void icecek()
	{
		mesaj("Bakiye giriniz");
		bakiye = input.nextDouble();
		int ymk;
		mesaj("1-)Coco Cola\n2-)Ayran\n");
		int s =input.nextInt();
		switch(s)
		{
		case 1:
			mesaj("Coco Cola Ücret giriniz");
			ymk = input.nextInt();
			bakiye = bakiye - ymk;
			mesaj("Mevcut Bakiyeniz = " +bakiye);
			break;
		case 2:
			mesaj("Ayran Ücret giriniz");
			ymk = input.nextInt();
			bakiye = bakiye - ymk;
			mesaj("Mevcut Bakiyeniz = " +bakiye);
			break;
			default:
				mesaj("geçerli sayı giriniz");
				break;
		}
	}
	public static void deserts()
	{
		mesaj("Bakiye giriniz");
		bakiye = input.nextDouble();
		int ymk;
		mesaj("1-)Künefe\n2-)Baklava\n");
		int s =input.nextInt();
		switch(s)
		{
		case 1:
			mesaj("Künefe Ücret giriniz");
			ymk = input.nextInt();
			bakiye = bakiye - ymk;
			mesaj("Mevcut Bakiyeniz = " +bakiye);
			break;
		case 2:
			mesaj("Bakalava Ücret giriniz");
			ymk = input.nextInt();
			bakiye = bakiye - ymk;
			mesaj("Mevcut Bakiyeniz = " +bakiye);
			break;
			default:
				mesaj("geçerli sayı giriniz");
				break;
		}
	}
	
}

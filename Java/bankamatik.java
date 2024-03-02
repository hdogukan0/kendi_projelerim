package deneme;
import java.util.Scanner;

public class bankamatik {
	static Scanner input = new Scanner(System.in);
	static int bakiye = 100;
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
			
		}while(secenek != 3);
		
	}
	
	public static void mesaj(String message)
	{
		System.out.println(message);
	}
	
	public static String adSoyadAl()
	{
		String ad, soyad;
		mesaj("Merhaba, İlerlemek için Lütfen Adınızı ve Soyadınızı Giriniz.\n");
		mesaj("Adınızı giriniz");
		ad = input.next();
		mesaj("Soyadınız Giriniz");
		soyad = input.next();
		
		return ad +" " +soyad;
		
	}
	
	public static void menu()
	{
		mesaj("Menü ;\n1) Para Yatırma\n2) Para Çekme\n3) Çıkış");
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
	
	public static void yonlendir()
	{
		mesaj("\nMenüye Yönlendiriliyorsunuz... \n");
	}
   
}

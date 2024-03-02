package deneme;

import java.util.Scanner;

public class kullanici_giris {
	
	static Scanner input = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		String usrname, pass;
		mesajVer("Kullanıcı Adını Giriniz");
		usrname = input.next();
		mesajVer("Şifrenizi Giriniz");
		pass = input.next();
		
		String sonuc = kontrol(usrname, pass);
		
		mesajVer(sonuc);
		
	}
	
	public static void mesajVer(String messages)
	{
		System.out.println(messages);
	}
	
	public static String kontrol(String x, String y)
	{
		String onay;
		if(x.equals("admin") && y.equals("12345"))
		{
			onay = "Giriş Başarılı";
		}
		else
		{
			onay = "Giriş Yapılamadı";
		}
		
		return onay;
	}

}

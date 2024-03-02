package deneme;
import java.util.Scanner;
import java.awt.FlowLayout;
import javax.swing.JFrame;
import javax.swing.JLabel;
import javax.swing.JPasswordField;
import javax.swing.ImageIcon;
import javax.swing.JButton;
import javax.swing.JTextField;

public class pencere {
	
	static Scanner input = new Scanner(System.in);
	
	public static void main(String[] args)
	{
		JFrame jf = new JFrame();
		jf.setTitle("Users Login Page");
		ImageIcon img = new ImageIcon("/8666725_globe_icon.png");
		jf.setIconImage(img.getImage());
		jf.setSize(300,175);
		jf.setLocation(560, 150);
		
		jf.getContentPane().setLayout(new FlowLayout());
		
		JTextField t1 = new JTextField(22);
		JPasswordField pass1 = new JPasswordField(22);
		JLabel label1 = new JLabel();
		JLabel label2 = new JLabel();
		JButton b1 = new JButton("Giriş");
		label1.setText("Kullanıcı Adınızı Giriniz");
		label2.setText("Şifrenizi Giriniz");
		
		jf.getContentPane().add(label1);
		jf.getContentPane().add(t1);
		jf.getContentPane().add(label2);
		jf.getContentPane().add(pass1);
		jf.getContentPane().add(b1);
		
		
		
		
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		jf.setResizable(false);
		jf.setVisible(true);
		
	}
	
	
}
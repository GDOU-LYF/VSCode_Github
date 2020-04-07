import java.util.Scanner;

public class time {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		int BJT,B1,B2;
		int UTC;
		BJT=in.nextInt();
		B1=BJT/100;
		B2=BJT%100;
		if(0<=B1 && B1<8) {
			B1=24+(B1-8);
		}else {
			B1=B1-8;
		}
		UTC=B1*100+B2;
		System.out.print(UTC);
	}

}

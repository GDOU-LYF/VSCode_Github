import java.util.Scanner;

public class math {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in =new Scanner(System.in);
		int x,number=0,amount=0;
		x=in.nextInt();
			while(x!=0) {
				int n=x%10;//ĳλ��������
				number++;//��nλ
				if((n+number)%2==0) { //��λ����ż��
						//System.out.print(1);
						amount=amount+(int)Math.pow(2, number-1);
				}else {
						//System.out.print(0);
				}
				x=x/10;
	}
			System.out.print(amount);
	
}
}


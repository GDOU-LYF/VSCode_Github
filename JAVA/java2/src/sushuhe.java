import java.util.Scanner;

public class sushuhe {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner pr =new Scanner(System.in);
		int a,b;
		a=pr.nextInt();
		b=pr.nextInt();
		int amount=0,c=0;
		int x=2;
		if(a<=b && b<=200) {
			while(c<b) {
				int count=1;
				for(int i=2;i<=Math.sqrt(x*1.0);i++) {
					if(x%i==0) {
						count=0;
						break;
					}
				}
				if(count==1 ) {
					c++;
					if(c>=a) {
						amount+=x;
					}
				}
				x++;
			}
		}

		System.out.println(amount);
}
}
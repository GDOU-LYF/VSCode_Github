import java.util.Scanner;

public class day5 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in=new Scanner(System.in);
		int[]n1=new int[100];int[]e1=new int[100];
		int[]n2=new int[100];int[]e2=new int[100];
		int a,b,i=0;
		do {
			a=in.nextInt();	
			b=in.nextInt();
			n1[i]=b;
			e1[i]=a;
			i++;
		}while(a!=0);
		
		do {
			a=in.nextInt();	
			b=in.nextInt();
			n2[i]=b;
			e2[i]=a;
			i++;
		}while(a!=0);


	}

}

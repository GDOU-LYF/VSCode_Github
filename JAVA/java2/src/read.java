import java.util.Scanner;

public class read {

	public static void main(String[] args) {
			// TODO Auto-generated method stub
			Scanner in = new Scanner(System.in);
			int number=in.nextInt();
			int cnt=0;
			int i=0;//��Ϊ���iҪ�õ��ڶ���forѭ��������Ҫ�����ﶨ��
			int a[]=new int[6];//����������ݵ����飨����
			String[] s= {" ling"," yi"," er"," san"," si"," wu"," liu"," qi"," ba"," jiu"};
			if(number==0)//0��һ������
			{
			System.out.print("ling");
			}
			else 
			{
				if(number>=-100000&&number<=100000)
				{
					if(number<0)//�ж���������ͳһ��Ϊ����
					{
						System.out.print("fu");
						number=-number;
					}
					for( i=0;number!=0;i++)//�����ݴ���������
					{
					cnt=number%10;
					number/=10;
					a[i]=cnt;
					}
					for(int j=i-1;j>=0;j--)//�������е��������������j���ȡi��������debug����forѭ����i�����ݵĳ��ȶ�1
					{
					String b=s[a[j]];//�ַ������������������Ӧ��
					System.out.print(b);
					}
				}
			}
			
	}
}	

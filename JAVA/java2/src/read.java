import java.util.Scanner;

public class read {

	public static void main(String[] args) {
			// TODO Auto-generated method stub
			Scanner in = new Scanner(System.in);
			int number=in.nextInt();
			int cnt=0;
			int i=0;//因为这个i要用到第二个for循环中所以要在这里定义
			int a[]=new int[6];//存放输入数据的数组（逆序）
			String[] s= {" ling"," yi"," er"," san"," si"," wu"," liu"," qi"," ba"," jiu"};
			if(number==0)//0是一个特例
			{
			System.out.print("ling");
			}
			else 
			{
				if(number>=-100000&&number<=100000)
				{
					if(number<0)//判断正负，再统一化为正数
					{
						System.out.print("fu");
						number=-number;
					}
					for( i=0;number!=0;i++)//将数据存入数组中
					{
					cnt=number%10;
					number/=10;
					a[i]=cnt;
					}
					for(int j=i-1;j>=0;j--)//将数组中的数字逆序输出，j如果取i则结果错误，debug后发现for循环后i比数据的长度多1
					{
					String b=s[a[j]];//字符串数组与数据数组对应；
					System.out.print(b);
					}
				}
			}
			
	}
}	

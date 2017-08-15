package coding;

import java.util.Scanner;

public class fibonaccli2 {
	
	public static void main(String args[])
	{
		
		Scanner sc;
		sc = new Scanner(System.in);
		int n,m,p,x;
		n = sc.nextInt();//25000000; Highest values of m and n for which this code 
		m = sc.nextInt();//1000000; run in 1 second.
		long startTime = System.nanoTime();
		int[] arr  = new int[n];
		int[][] fibo = new int[2][2];
		p = period(m);
		//System.out.println(p);
		arr = generatearray(arr,n);
		/*for(i=n-1;i>=0;i--)
		{
			System.out.print(arr[i]+" ");
		}*/
		//System.out.println();
		x = moduloof(arr,n,p);
		fibo[0][0] = 1;
		fibo[0][1] = 1;
		fibo[1][0] = 1;
		fibo[1][1] = 0;
		fibo = power(fibo,2,2,x,10);
		//System.out.println(x);
		System.out.println(fibo[0][0]+" "+fibo[0][1]);
		System.out.println(fibo[1][0]+" "+fibo[1][1]);
		sc.close();
		long endtime = System.nanoTime();
		System.out.println("Time taken ."+(endtime - startTime)/100000000 + " s");
		
	}
	private static int moduloof(int[] arr, int n, int p) {
		int i,temp = 0;;
		for(i=n-1;i>=0;i--)
		{
			temp = (temp*10)+arr[i];
			temp%=p;
		}
		return temp;
	}
	private static int[] generatearray(int[] arr,int n) {
		// TODO Auto-generated method stub
		int i;
		arr[0] = 1 + (int)(Math.random() * 9); 
		for(i=1;i<n;i++)
		{
			arr[i] = 0 + (int)(Math.random() * 9); 
		}
		return arr;
	}
	private static int period(int m)
	{
		int a=-1,b=-1,c=-1,d=-1,count=0;
		a = 0;
		b = 1;
		while((c!=0)||(d!=1))
		{
			c = (a + b)%m;
			d = (c + b)%m;
			a = c;
			b = d;
			count++;
			
		}
		return (2*count);
	}
	public static int[][] power(int[][] fib,int r,int c,int n,int m)
	{
		int [][] ans = new int[2][2];
		ans[0][0] = 1;
		ans[0][1] = 0;
		ans[1][0] = 0;
		ans[1][1] = 1;
		//System.out.println("e"+fib[0][0]+" "+fib[0][1]);

		while(n>0)
		{
			if((n%2)==1)
				ans = matrixmul(fib,ans,2,2,m);
			fib = matrixmul(fib,fib,2,2,m);
			n = n/2;
			//System.out.println("b"+fib[0][0]+" "+fib[0][1]);

		}
		//System.out.println("b"+ans[0][0]+" "+ans[0][1]);
		return ans;
	}
	public static int[][] matrixmul(int[][] fib,int[][] ans,int r,int c,int m)
	{
		int[][] res = new int[2][2];
		//System.out.println("c"+fib[0][0]+" "+fib[0][1]);
		//System.out.println("c"+fib[1][0]+" "+fib[1][1]);

		//System.out.println("d"+ans[0][0]+" "+ans[0][1]);
		//System.out.println("d"+ans[1][0]+" "+ans[1][1]);

		res[0][0] = ((((fib[0][0]%m)*(ans[0][0]%m))%m)+(((fib[0][1]%m)*(ans[1][0]%m))%m))%m;
		res[0][1] = ((((fib[0][0]%m)*(ans[0][1]%m))%m)+(((fib[0][1]%m)*(ans[1][1]%m))%m))%m;
		res[1][0] = ((((fib[1][0]%m)*(ans[0][0]%m))%m)+(((fib[1][1]%m)*(ans[1][0]%m))%m))%m;
		res[1][1] = ((((fib[1][0]%m)*(ans[0][1]%m))%m)+(((fib[1][1]%m)*(ans[1][1]%m))%m))%m;
		//System.out.println("z"+res[0][0]+" "+res[0][1]);
		//System.out.println("z"+res[1][0]+" "+res[1][1]);

		return res;
	}

}

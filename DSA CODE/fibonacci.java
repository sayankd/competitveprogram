package coding;

public class fibonacci {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		long startTime = System.nanoTime();
		int[][] fibo = new int[2][2];
		//int[] arr = new int[1000];
		int n;
		n = 1428000;
		int[] arr = new int[n];
		arr = generatearray(arr,n);
		int[][] x = new int[2][2];
		int i;
		//arr[0] = 5;
		//arr[1] = 1;
		/*for(i=0;i<n;i++)
		{
			System.out.println(arr[i]);
		}*/
		fibo[0][0] = 1;
		fibo[0][1] = 1;
		fibo[1][0] = 1;
		fibo[1][1] = 0;
		i = 0;
		
		while(i<n)
		{
			if(i==0)
			{
				x = matrixadd(x,power(fibo,2,2,arr[i]));
				//System.out.println(x[0][0]+" "+x[0][1]);
				//System.out.println(x[1][0]+" "+x[1][1]);
			}
			else
			{
				fibo =  power(fibo,2,2,10);
				x = matrixmul(x,power(fibo,2,2,arr[i]),2,2);
			}
			//System.out.println(x[0][0]+" "+x[0][1]);
			//System.out.println(x[1][0]+" "+x[1][1]);
			i++;
		}
		System.out.println(x[0][0]+" "+x[0][1]);
		System.out.println(x[1][0]+" "+x[1][1]);
		long endTime = System.nanoTime();
		System.out.println("Took ."+(endTime - startTime)/100000000 + " s"); 
		
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
	private static int[][] matrixadd(int[][] x, int[][] po) {
		// TODO Auto-generated method stub
		int [][] ans = new int[2][2];
		ans[0][0] = x[0][0]+po[0][0];
		ans[0][1] = x[0][1]+po[0][1];
		ans[1][0] = x[1][0]+po[0][1];
		ans[1][1] = x[1][1]+po[1][1];
		return ans;
	}
	public static int[][] power(int[][] fib,int r,int c,int n)
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
				ans = matrixmul(fib,ans,2,2);
			fib = matrixmul(fib,fib,2,2);
			n = n/2;
			//System.out.println("b"+fib[0][0]+" "+fib[0][1]);

		}
		//System.out.println("b"+ans[0][0]+" "+ans[0][1]);
		return ans;
	}
	public static int[][] matrixmul(int[][] fib,int[][] ans,int r,int c)
	{
		int[][] res = new int[2][2];
		int m = 10000;
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

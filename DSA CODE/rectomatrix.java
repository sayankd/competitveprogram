package coding;

import java.util.Scanner;

//Convert recurrence relation F(N) = F(N-1)+F(N-3) in to a matrix form and then use matrix 
//exponentiation to get result
public class rectomatrix {
	public static void main(String args[])
	{
		int n,i,j,m;
		int[][] mat = new int[3][3];
		mat[0][0] = 1;
		mat[0][1] = 0;
		mat[0][2] = 1;
		mat[1][0] = 1;
		mat[1][1] = 0;
		mat[1][2] = 0;
		mat[2][0] = 0;
		mat[2][1] = 1;
		mat[2][2] = 0;
		Scanner sc = new Scanner(System.in);
		n = sc.nextInt();
		m = sc.nextInt();
		mat = power(mat,n,m);
		sc.close();
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				System.out.print(mat[i][j]+" ");
			}
			System.out.println();
		}
		System.out.println("F("+n+") is "+mat[1][0]) ;
	}
	private static int[][] power(int[][] mat, int n,int m) {
		// TODO Auto-generated method stub
		int[][] ans = new int[3][3];
		ans[0][0] = 1;
		ans[0][1] = 0;
		ans[0][2] = 0;
		ans[1][0] = 0;
		ans[1][1] = 1;
		ans[1][2] = 0;
		ans[2][0] = 0;
		ans[2][1] = 0;
		ans[2][2] = 1;
		while(n>0)
		{
			if((n%2)==1)
				ans = matmul(ans,mat,m);
			mat = matmul(mat,mat,m);
			n = n/2;
		}
		
		return ans;
	}

	private static int[][] matmul(int[][] ans, int[][] mat,int m) {
		// TODO Auto-generated method stub
		int i,j,k;
		int[][] res = new int[3][3];
		for(i=0;i<3;i++)
		{
			for(j=0;j<3;j++)
			{
				res[i][j] = 0;
				for(k = 0;k<3;k++)
				{
					res[i][j] = ((res[i][j]%m) + ((ans[i][k]%m)*(mat[k][j]%m)%m)%m);
				}
			}
		}
		return res;
	}

}

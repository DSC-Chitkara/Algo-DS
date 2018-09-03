public class Matrix_multiplication {
	int [][] mat_mult(int[][] a, int[][] b)
	{
		int[][] M = new int[a.length][b[0].length];
		
		if (a[0].length != b.length)
		{
			System.out.println("Can't execute the multiplication!");
			return M;
		}
		
		for (int i = 0; i < a.length; i++) //rows of a
			for (int j = 0; j < b[0].length; j++) //columns of b
				for (int k = 0; k < b.length; k++) //rows of b = columns of a
					M[i][j] += a[i][k]*b[k][j];
		return M;
	}
	
	public static void main (String args[])
	{
		Matrix_multiplication Matrix = new Matrix_multiplication();
		int[][] a = {{1, 2, 3},{4, 5, 6}};
		int[][] b = {{4, 5},{6, 7},{8, 9}};
		
		int[][] M = Matrix.mat_mult(a, b);
		for (int i = 0; i < M.length; i++)
		{
			for (int j = 0; j < M[0].length; j++)
				System.out.print(M[i][j]+" ");
			System.out.println();
		}
	}
}

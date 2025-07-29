public class matrixMultiplication {
    public static void main(String args[])
    {
        int A[][] = {{1,3,5},{2,4,6},{7,9,11}};
        int B[][] = {{8,10,12},{13,15,17},{14,16,18}};

        int C[][] = new int [3][3];

        for(int i=0;i<A.length;i++)
        {
            for(int j=0;j<A[0].length;j++)
            {
                C[i][j] = A[i][j] + B[i][j];
            }
        }
        for(int x[]:C)
        {
            for(int y:x)
            {
                System.out.print(y+" ");
            }
            System.out.println("");
        }

        int E[][] = {{1,0,0},{0,1,0},{0,0,1}};
        int D[][] = {{0,2,4},{6,8,10},{1,3,5}};

        int F[][] = new int [3][3];

        for(int i=0;i<3;i++)
        {
            for(int j=0;j<3;j++)
            {
                F[i][j] = 0;
                for(int k=0;k<3;k++)
                {
                    F[i][j] = F[i][j]+D[i][k]*E[j][k];
                }
            }
        }

        for(int x[]:F)
        {
            for(int y:x)
            {
                System.out.print(y+" ");
            }
            System.out.println("");
        }
    }
}
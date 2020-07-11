import java.util.*;
class Smallest
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        if(t>=1 && t<=100)
        {
            while(t-- >0)
            {
                int N=sc.nextInt();
                if(N>=1 && N<=100)
                {
                    int A[]=new int[N];

                    for(int i=0;i<N;i++)
                        A[i]=sc.nextInt();

                    boolean flag=false; 

                    for(int i=N-1;i>0;i--)
                    {
                        flag=false;
                        for(int j=i-1;j>=0;j--)
                        {
                            if(A[j]<A[i])
                            {
                                A[i]=A[j];
                                flag=true;
                                break;
                            }
                        }
                        if(!flag)
                            A[i]=-1;
                    }
                    A[0]=-1;

                    for(int i=0;i<N;i++)
                        System.out.print(A[i]+" ");
                }
            }
        }
    }
}
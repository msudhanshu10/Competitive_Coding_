import java.util.*;
class ORTHODOX
{
    public int compute(int l,int r,long A[])
    {
        int temp=0;
        for(int i=l;i<=r;i++)
            temp|=A[i];

        return temp;
    }
    public boolean checkOR(long A[])
    {
        int n=A.length;
        int K[]=new int[n*(n+1)/2];
        int index=0; 
        int temp=0;
        for(int r=0;r<A.length;r++)
        {
            for(int l=0;l<=r;l++)
            {
                temp=compute(l,r,A);
                for(int i=0;i<index;i++)
                {
                    if(temp==K[i])
                    {
                        return false;
                    }      
                }
                K[index++]=temp;
            }
        }
        return true;
    }
    public static void main(String args[])
    {
        ORTHODOX obj=new ORTHODOX();
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        boolean ans[]=new boolean[t];
        int k=0;
        int sum_N=0;
        if(t>=1 && t<=300)
        {
            while(t-- >0)
            {
                int N=sc.nextInt();
                sum_N+=N;

                if(N>=1 && N<=100000 && sum_N<=3*100000)
                {
                    long A[]=new long[N];
                    for(int i=0;i<N;i++)
                    {
                        A[i]=sc.nextLong();
                        if(A[i]>=0 && A[i]<=Math.pow(10,18))    continue;
                        else    return;
                    }
                    ans[k++]=obj.checkOR(A);
                }
            }
            for(int i=0;i<k;i++)
            {
                if(ans[i])  System.out.println("YES");
                else System.out.println("NO");
            }
        }
        sc.close();
    }
}
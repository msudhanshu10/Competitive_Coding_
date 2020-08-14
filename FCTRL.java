// Number of trailing zeroes= number of times it is divided by 10
// i.e, Power of 10= power of 5
// [n/5]+[n/25]+n[125]+........ 
// []=GIF
// continue till []>=5

import java.util.*;
class Factorial
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        long ans[]=new long[t];
        int k=0;
        if(t>=1 && t<=100000)
        {
            while(t-->0)
            {
                long N=sc.nextLong();
                long f;
                long sum=0;
                long x=5;
                if(N>=1 && N<=Math.pow(10,9))
                {
                    do
                    {
                        f=(long)Math.floor(N/x);
                        x=x*5;
                        sum+=f;
                    }while(f>=5);

                    ans[k++]=sum;
                }
            }
            for(int i=0;i<k;i++)
                System.out.println(ans[i]);
        }
        sc.close();
    }
}
import java.util.*;
public class minLCM
{
    public long LCM(long a,long b)
    {
        long max,L=0;
        if(a>b) max=a;
        else    max=b;
        for(long i=max;i<=a*b;i++)
        {
            if(i%a==0 && i%b==0)
            {
                L=i;
                break;
            }
        }
        return L;
    }

    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        minLCM obj=new minLCM();
        int t=sc.nextInt();
        long ans[]=new long[t];
        int k=0;
        long n[]=new long[t];

        if(t>=1 && t<=10)
        {
            while(t-->0)
            {
                long N=sc.nextLong();
                if(N>=2 && N<=Math.pow(10,9))
                {
                    long min=N;
                    long lcm;
                    long key=0;
                    for(long i=N/2;i>=1;i--)
                    {
                        lcm=obj.LCM(i,N-i);
                        //System.out.println(lcm);
                        if(lcm<min)
                        {
                            min=lcm;
                            key=i;
                        }
                    }
                    n[k]=N;
                    ans[k++]=key;
                }
            }
            for(int i=0;i<k;i++)
                System.out.println(ans[i]+" "+(n[i]-ans[i]));
        }

    }
}
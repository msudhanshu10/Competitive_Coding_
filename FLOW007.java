import java.util.*;
class Reverse
{
    long n[];
    int t;

    Reverse()
    {
        Scanner sc=new Scanner(System.in);
        t=sc.nextInt();
        if(t>=1 && t<=1000)
        {
            n=new long[t];
            for(int i=0;i<t;i++)
                n[i]=sc.nextLong();
        }
        sc.close();
    }

    public long rev(long N)
    {
        long n=N,num=0,rem;
        while(n>0)
        {
            rem=n%10;
            n/=10;
            num=num*10+rem;
        }
        return num;
    }

    public static void main(String args[])
    {
        Reverse obj=new Reverse();

        for(int i=0;i<obj.t;i++)
        {
            if(obj.n[i]>=1 && obj.n[i]<=1000000)
                System.out.println(obj.rev(obj.n[i]));
        }

    }
}
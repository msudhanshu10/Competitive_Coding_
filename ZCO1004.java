import java.util.*;
class maxProfit
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        if(n>=1 && n<=500000)
        {
            long a[]=new long[n];
            for(int i=0;i<n;i++)
                a[i]=sc.nextLong();

            Arrays.sort(a);
            long max=0;
            long profit;
            for(int i=0;i<n;i++)
            {
                profit=a[i]*(n-i);
                if(profit>max)
                    max=profit;
            }
            System.out.println(max);
        }
        
        sc.close();
    }
}
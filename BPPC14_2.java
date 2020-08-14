import java.util.*;
class BPPC14_2
{
    public static void main(String[] args)
    {
        Scanner sc=new Scanner(System.in);
         int n=sc.nextInt();
         long H[]=new long[n];
         int count=0;
         for(int i=0;i<n;i++)
            H[i]=sc.nextLong();
            
        for(int i=0;i<n-1;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(Math.abs(i-j)==(H[i]+H[j]))
                    count++;
            }
        }
        System.out.println(count);
        sc.close();
    }
}
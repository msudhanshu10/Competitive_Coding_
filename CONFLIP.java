import java.util.*;
class coinflip
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        
        if(t>=1 & t<=10)
        {
            while(t-->0)
            {
                int G=sc.nextInt();
                if(G>=1 && G<=20000)
                {
                    StringBuffer ans=new StringBuffer();
                    while(G-- >0)
                    {
                        int I,Q;
                        long N;
                        I=sc.nextInt();
                        N=sc.nextLong();
                        Q=sc.nextInt();
                        
                        if(I>=1 && I<=2 && N>=1 && N<=Math.pow(10,9) && Q>=1 && Q<=2)
                        {
                            long count_true=0;
                            long count_false=0;
                            //StringBuffer flip=new StringBuffer();
                            for(long i=0;i<N;i++)
                            {
                                if((N-i)%2!=0)  count_true++;
                                else    count_false++;
                            }
                            if(I==Q)    ans.append(count_false);
                            else        ans.append(count_true);
                        }
                    }
                    for(int i=0;i<ans.length();i++)
                        System.out.println(ans.charAt(i));
                }
            }
        }
        sc.close();
    }
}
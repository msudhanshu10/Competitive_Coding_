import java.util.*;
import java.io.File;
import java.io.IOException;
import java.io.PrintStream;
class Solution
{
    public boolean is_formed(String C)
    {
        int count_A=0,count_B=0;
        for(int i=0;i<C.length();i++)
        {
            if(C.charAt(i)=='A')    count_A++;
            else                    count_B++;
        }
        if(Math.abs(count_A-count_B)==1)    return true;
        else    return false;
    }
    public static void main(String args[])throws IOException
    {
        Scanner sc=new Scanner(System.in);
        Solution obj=new Solution();
        File file = new File("F:\\sample.txt");
        PrintStream stream = new PrintStream(file);
        System.setOut(stream);

        int t=sc.nextInt();
        boolean ans[]=new boolean[t];
        int k=0;
        long sum=0;
        if(t>=1 && t<=95)
        {
            while(t-- >0)
            {
                int N=sc.nextInt();
                sum+=N;
                if(N>=3 && N<=99999 && sum<=Math.pow(10,6~))
                {
                    String C=sc.next();
                    ans[k++]=obj.is_formed(C);
                }
            }
            for(int i=0;i<k;i++)
            {
                if(ans[i])  System.out.println("Case #"+(i+1)+": Y");
                else        System.out.println("Case #"+(i+1)+": N");
            }
        }
        sc.close();
    }
}
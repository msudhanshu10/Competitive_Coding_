import java.util.*;
import java.io.File;
import java.io.IOException;
import java.io.PrintStream;
class leapFrog
{
    public static void main(String args[])throws IOException
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        boolean ans[]=new boolean[t];
        int k=0;
        File file = new File("F:\\output.txt");
        PrintStream stream = new PrintStream(file);
        System.setOut(stream);
        if(t>=1 && t<=1050)
        {
            while(t-- >0)
            {
                String s=sc.next();
                int N=s.length();
                if(N>=2 && N<=50000)
                {
                    int c1=0,c2=0;
                    for(int i=0;i<N;i++)
                    {
                        if(s.charAt(i)=='.')    c1++;
                        else if(s.charAt(i)=='B')  c2++;
                        else    continue;
                        
                    }
                    if(c1==0)   ans[k++]=false;
                    else if(c2==0) ans[k++]=false;
                    else if(c2<c1)  ans[k++]=false;
                    else        ans[k++]=true;
                }
            }
            for(int i=0;i<k;i++)
            {
                if(ans[i])  System.out.println("Case #"+(i+1)+": Y");
                else    System.out.println("Case #"+(i+1)+": N");
            }
        }
        sc.close();
    }
}
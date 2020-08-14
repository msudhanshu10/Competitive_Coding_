import java.util.*;
class EVENTUAL
{
    public boolean isEven(String s)
    {
        int count=0;
        for(int i=0;i<s.length();i++)
        {
            count=0;
            for(int j=0;j<s.length();j++)
            {
                if(s.charAt(i)==s.charAt(j))
                {
                    count++;
                }
            }
            if(count%2!=0)  return false;
        }
        return true;
    }

    public static void main(String args[])
    {
        EVENTUAL obj=new EVENTUAL();
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        boolean ans[]=new boolean[t];
        int k=0;

        if(t>=1 && t<=200)
        {
            while(t-- >0)
            {
                int N=sc.nextInt();
                if(N>=1 && N<=1000)
                {
                    String s=sc.next();
                    ans[k++]=obj.isEven(s);
                }
            }
            for(int i=0;i<k;i++)
            {
                if(ans[i])  System.out.println("YES");
                else    System.out.println("NO");
            }
        }
        sc.close();
    }
}
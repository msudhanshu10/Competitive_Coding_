import java.util.*;
class Solution
{
    public static String check(int a[],int b[])
    {
        String A=Arrays.toString(a);
        String B=Arrays.toString(b);

        for(int i=0;i<A.length();i++)
        {
           String ch=Character.toString(A.charAt(i));
        boolean flag= B.contains(ch);
        if(flag)    return "NO";
        else    return ch;
        }

        for(int i=0;i<A.length();i++)
        {
            for(int j=i+1;j<A.length();j++)
            {
                String sub=Character.toString(A.charAt(i))+Character.toString(A.charAt(j));
                int k1,k2;
                k1=B.indexOf(sub.charAt(0));
                k2=B.indexOf(sub.charAt(1));
                if(k1<0 || k2<0 || k1>k2)
                    return "NO";
                else
                {
                    return sub;
                }
            }
        }
        //return "NO";
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        String ans[]=new String[t];
        int k=0;
        if(t>=1 && t<=1000)
        {
            while(t-- >0)
            {
                int n_a=sc.nextInt();
                int n_b=sc.nextInt();
                int a[]=new int[n_a];
                int b[]=new int[n_b];
                for(int i=0;i<n_a;i++)
                    a[i]=sc.nextInt();
                for(int i=0;i<n_b;i++)
                    b[i]=sc.nextInt();

                ans[k++]=Solution.check(a,b);      
            }
            for(int i=0;i<k;i++)
            {
                if(ans[i].equals("NO")) System.out.println("NO");
                else{
                    System.out.println("YES");
                    System.out.println(ans[i].length()+" "+ans[i].charAt(0)+" "+ans[i].charAt(1));
                }
            }
        }
    }
}
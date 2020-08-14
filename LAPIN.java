import java.util.*;
class lapindrome
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int ans[]=new int[t];
        int k=0;
        if(t>=1 && t<=100)
        {
            while(t-- >0)
            {
                String s=sc.next();
                int n=s.length();
                if(n>=2 && n<=1000)
                {
                char a[];
                char b[];
                if(n%2!=0)
                {
                    a=new char[n/2];
                    b=new char[n/2];
                    for(int i=0;i<n/2;i++)
                        a[i]=s.charAt(i);
                    for(int i=n/2+1;i<n;i++)
                        b[i-(n/2+1)]=s.charAt(i);
                }
                else
                {
                    a=new char[n/2];
                    b=new char[n/2];
                    for(int i=0;i<n/2;i++)
                        a[i]=s.charAt(i);
                    for(int i=n/2;i<n;i++)
                        b[i-n/2]=s.charAt(i);
                }

                Arrays.sort(a);
                Arrays.sort(b);
                boolean flag=false;
                for(int i=0;i<a.length;i++)
                {
                    if(a[i]!=b[i])
                    {
                        flag=true;
                        break;
                    }
                }
                if(flag)
                    ans[k++]=0;
                else    ans[k++]=1;
                    
            }
        }
            for(int i=0;i<k;i++)
            {
                if(ans[i]==1)   System.out.println("YES");
                else    System.out.println("NO");
            }

        }
        sc.close();
    }
}
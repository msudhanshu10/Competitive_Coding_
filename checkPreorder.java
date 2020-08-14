import java.util.*;
class Preorder
{
    public boolean isPreorder(int a[])
    {
        Stack<Integer> s=new Stack<Integer>();
        int root=-1;
        for(int i=0;i<a.length;i++)
        {
            if(a[i]<root)
                return false;
            
            while(!s.isEmpty()&&a[i]>s.peek())
            {
                root=s.peek();
                s.pop();
            }
            s.push(a[i]);
        }
        return true;
    }
    public static void main(String args[])
    {
        Preorder obj=new Preorder();
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        boolean ans[]=new boolean[t];
        int k=0;
        if(t>=1 && t<=100)
        {
            while(t-->0)
            {
                int n=sc.nextInt();
                if(n>=1 && n<=1000)
                {
                    int a[]=new int[n];
                    for(int i=0;i<n;i++)
                        a[i]=sc.nextInt();

                    ans[k++]=obj.isPreorder(a);
                }
            }
            for(int i=0;i<k;i++)
            {
                if(ans[i])
                    System.out.println("1");
                else
                    System.out.println("0");
            }
        }
        sc.close();
    }
}
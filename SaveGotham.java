import java.util.*;
class maxHeight
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int ans[]=new int[t];
        int k=0;
        if(t>=1 && t<=100)
        {
            while(t-- > 0)
            {
                int N=sc.nextInt();
                
                if(N>=1 && N<=18000)
                {
                    

                    int s[]=new int[N];
                    for(int i=0;i<N;i++)
                        s[i]=sc.nextInt();

                    int max=0;
                    for(int i=0;i<N;i++)
                    {
                        if(s[i]>max)
                            max=s[i];
                    }

                    if(max>=0 && max<=100000)
                    {
                    int top=N-1;
                    int sum=0;
                    Stack obj=new Stack(N);
                    obj.push(s[top]);

                    for(int i=top-1;i>=0;i--)
                    {
                        while(true)
                        {
                            if(s[i]<=obj.top())
                            {
                                if(s[i]<obj.top())
                                    sum=sum+obj.top();
                                obj.push(s[i]);
                                break;
                            }
                            else
                            {
                                if(obj.isEmpty())
                                {
                                    break;
                                }
                                else
                                {
                                    obj.pop();
                                    if(obj.isEmpty())
                                        obj.push(s[i]);
                                    continue;
                                }
                            }
                        }
                    }
                    ans[k++]=sum;
                }
            }
        }
            for(int i=0;i<k;i++)
                System.out.println(ans[i]);
        }
    }
}
class Stack
{
    int a[];
    int top;
    Stack(int N)
    {
        a=new int[N];
        top=0;
    }

    public void push(int val)
    {
        a[top++]=val;
    }

    public void pop(){
        a[--top]=-1;
    }

    public int top()
    {
        if(isEmpty())
            return 0;
        return a[top-1];
    }

    public boolean isEmpty()
    {
        return top==0;
    }
}
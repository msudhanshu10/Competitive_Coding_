import java.util.*;
class Stock
{
    public void calculate(int S[],int a[], int n)
    {
        Stack<Integer> st=new Stack<Integer>();
        st.push(0);
        S[0]=1;
        for(int i=1;i<n;i++)
        {
            while(!st.isEmpty() && a[st.peek()]<=a[i])
                st.pop();

            S[i]=st.isEmpty()?(i+1):(i-st.peek());
            st.push(i);
        }
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        Stock obj=new Stock();

        int t=sc.nextInt();
        String ans[]=new String[t];
        int k=0;

        if(t>=1 && t<=100)
        {
            while(t-->0)
            {
                int n=sc.nextInt();
                if(n>=1 && n<=200)
                {
                    int a[]=new int[n];
                    for(int i=0;i<n;i++)
                        a[i]=sc.nextInt();
                    
                    int S[]=new int[n];
                    obj.calculate(S,a,n);

                    StringBuffer sb=new StringBuffer();
                    for(int i=0;i<n;i++)
                    {
                        sb.append(S[i]);
                        sb.append(" ");
                    }
                    ans[k++]=sb.toString();
                }
            }
            for(int i=0;i<k;i++)
                System.out.println(ans[i]);
        }
        sc.close();
    }
}
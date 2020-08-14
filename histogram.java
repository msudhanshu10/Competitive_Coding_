//O(N) algo
import java.util.*;

class histogram
{
    public int calculate(int hist[],int n)
    {
        Stack<Integer> st=new Stack<Integer>();
        int tp;
        int area, max_area=0;
        int i=0;
        while(i<n)
        {
            if(st.isEmpty()|| hist[i]>hist[st.peek()])
                st.push(i++);
            else
            {
                tp=st.peek();
                    st.pop();

                area=hist[tp] * (st.empty() ? i : i - st.peek() - 1);
                if(area>max_area)
                    max_area=area;
            }

        }

        while (st.empty() == false) 
        { 
            tp = st.peek(); 
            st.pop(); 
            area= hist[tp] * (st.empty() ? i : i - st.peek() - 1); 
       
            if (max_area < area) 
                max_area = area; 
        } 
        return max_area;
    }
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        histogram obj=new histogram();
        int t=sc.nextInt();
        int ans[]=new int[t];
        int k=0;
        if(t>=1 && t<=100)
        {
            while(t-- >0)
            {
                int n=sc.nextInt();
                if(n>=1 && n<=100000)
                {
                    int hist[]=new int[n];
                    for(int i=0;i<n;i++)
                        hist[i]=sc.nextInt();

                    ans[k++]=obj.calculate(hist,n); 
                }
            }
            for(int i=0;i<k;i++)
                System.out.println(ans[i]);
        }
        sc.close();
    }
}
import java.util.*;
class minSum
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int ans[]=new int[t];
        int k=0;

        if(t>=1  &&  t<=100 )
        {
            while(t-->0)
            {
                int N;
                N=sc.nextInt();
                if(N>=1 && N<=50)
                {
                    PriorityQueue obj=new PriorityQueue(N+1);
                    int a[]=new int[N];
                    for(int i=0;i<N;i++)
                    {
                        a[i]=sc.nextInt();
                        obj.insert(a[i]);
                    }

                    int num1=0,num2=0;
                    int i=0;
                    while(obj.N>0)
                    {
                        num1+=Math.pow(10,i)*obj.delete();  
                        if(obj.N==0)    break;
                        
                        
                        num2+=Math.pow(10,i)*obj.delete();
                        i++;
                    }

                    ans[k++]=num1+num2;
                }
            }
            for(int i=0;i<k;i++)
                System.out.println(ans[i]);
        }
        sc.close();
    }
}

public class PriorityQueue
{
    int pq[];
    int N;
    PriorityQueue(int cap)
    {
        N=0;
        pq=new int[cap];
    }

    public void insert(int k)
    {
        pq[++N]=k;
        swim(N);
    }
    public void exch(int i,int j)
    {
        int temp=pq[i];
        pq[i]=pq[j];
        pq[j]=temp;
    }

    public void swim(int k)
    {
        while(pq[k]>pq[k/2]&& k>1)
        {
            exch(k,k/2);
            k=k/2;
        }
    }

    public int delete()
    {
        int m=pq[1];
        exch(1,N--);
        sink(1);
        return m;
    }
    public void display()
    {
        for(int i=1;i<=N;i++)
            System.out.print(pq[i]+"->");
        System.out.println();
    }

    public void sink(int k)
    {
        while(2*k<=N)
        {
            int j=2*k;
            if(j<N&&pq[j]<pq[j+1])  j++;
            if(!(pq[k]<pq[j]))  break;
            exch(k,j);
            k=j;
        }
    }
}
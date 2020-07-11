import java.util.*;

class minCost
{ 
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int ans[]=new int[t];
        int k=0;
        if(t>=1 && t<=100)
        {
            while(t-->0)
            {
                int N=sc.nextInt();
                if(N>=1 && N<=1000000)
                {
                    minPriorityQueue obj=new minPriorityQueue(N+1);
                    for(int i=0;i<N;i++)
                        obj.insert(sc.nextInt());

                    int sum=0;
                    while(obj.N!=1)
                    {
                        int m=obj.delete();
                        sum=sum+m;
                    }

                    ans[k++]=sum;
                }
            }
            for(int i=0;i<k;i++)
                System.out.println(ans[i]);
        }
        sc.close();
    }
}

public class minPriorityQueue
{
    int pq[];
    int N;
    minPriorityQueue(int cap)
    {
        pq=new int[cap];
        N=0;
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
        while(pq[k]<pq[k/2] && k>1)
        {
            exch(k,k/2);
            k=k/2;
        }
    }

    public void display()
    {
        for(int i=1;i<pq.length;i++)
            System.out.print(pq[i]+"->");

        System.out.println();
    }

    public int delete()
    {
        int j;
        //display();
        if(N>2)
        {
        
        if(pq[2]<pq[3])
            j=2;
        else 
            j=3;
        pq[j]=pq[1]+pq[j];
        }
        else
        {
            pq[1]=pq[1]+pq[2];
            j=1;
        }

        //display();

        int m=pq[j];
        exch(1,N--);
        //pq[N+1]=null;
        sink(1);
        return m;
        
    }

    public void sink(int k)
    {
        while(2*k<=N)
        {
            int j=2*k;
            if(j<N && pq[j]>pq[j+1])    j++;
            if(!(pq[k]>pq[j]))  break;
            exch(k,j);
            k=j;
        }
    }
}
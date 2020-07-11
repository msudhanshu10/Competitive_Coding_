//Solution using priority Queue.
import java.util.*;
class ChinkyDiamond
{
    int pq[];
    int N;

    ChinkyDiamond(int cap)
    {
        pq=new int[cap];
        N=0;
    }

    public void insert(int val)
    {
        pq[++N]=val;
        swim(N);
    }

    public int delMax()
    {
        int n=pq[1];
        exch(1,N--);
        sink(1);
        pq[N+1]=-1;
        
        
        return n;
    }

    public void exch(int i,int j)
    {
        int temp;
        temp=pq[i];
        pq[i]=pq[j];
        pq[j]=temp;
    }

    public void swim(int k)
    {
        while(pq[k]>pq[k/2] && k>1)
        {
            exch(k,k/2);
            k=k/2;
        }
    }

    
    public void sink(int k)
    {
        while(2*k<=N)
        {
            int j=2*k;
            if(j<N && pq[j]<pq[j+1])
                j++;
            if(!(pq[k]<pq[j]))
                break;
            exch(k,j);
            k=j;
        }
    }

    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int k=0;
        int ans[]=new int[t];
        if(t>=1 && t<=10)
        {
            while(t-- >0)
            {
                int sum=0;
                int N=sc.nextInt();
                int K=sc.nextInt();
                if(N>=1 && N<=100000 && K>=0 && K<=100000)
                {
                    ChinkyDiamond obj=new ChinkyDiamond(N+1);
                    for(int i=1;i<=N;i++)
                        obj.insert(sc.nextInt());

                    for(int i=0;i<K;i++)
                    {
                        int n=obj.delMax();
                        obj.insert(n/2);
                        sum+=n;
                    }
                    ans[k++]=sum;   
                }
            }
           for(int i=0;i<k;i++)
            System.out.println(ans[i]); 
        
    }
}
}
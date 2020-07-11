import java.util.*;
class Sort
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        String ans[]=new String[t];
        int k=0;
        if(t>=1 && t<=100)
        {
            while(t-- >0)
            {
                int N,K;
                N=sc.nextInt();
                K=sc.nextInt();
                if(N>=1 && N<=100 && K>=1 &&  K<=N)
                {
                    int a[]=new int[N];
                    for(int i=0;i<N;i++)
                        a[i]=sc.nextInt();

                    PriorityQueue ob=new PriorityQueue(N+1);
                    for(int i=0;i<N;i++)
                        ob.insert(a[i]);

                    ans[k]=Arrays.toString(ob.sort()).replaceAll("," , "");
                    k++;
                }
            }
            for(int i=0;i<k;i++)
                System.out.println(ans[i].substring(3,ans[i].length()-1));
        }
    }
}

class PriorityQueue
{
    int pq[];
    int N;
    PriorityQueue(int cap)
    {
        pq=new int[cap];
        N=0;
    }

    public void insert(int x)
    {
        pq[++N]=x;
        swim(N);
    }

    public void swim(int k)
    {
        while(pq[k/2]<pq[k]&&k>1)
        {
            exch(k/2,k);
            k=k/2;
        }
    }

    public void exch(int i,int j)
    {
        int temp=pq[i];
        pq[i]=pq[j];
        pq[j]=temp;
    }

    public int[] sort()
    {
        while(N>0){
        exch(1,N--);
        sink(1);
        }

        return pq;
    }

    public void sink(int k)
    {
        while(2*k<N)
        {
            int j=2*k;
            if(j<N&&pq[j]<pq[j+1])    j++;
            if(!(pq[k]<pq[j])) break;
            exch(k,j);
            k=j;
        }
    }

}

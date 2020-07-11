import java.util.*;
class DistinctArray
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
                if(N>=1 && N<=30)
                {
                    long b[]=new long[N];
                    long a[]=new long[N];

                    for(int i=0;i<N;i++)
                    {
                        b[i]=sc.nextLong();
                        a[i]=Math.abs(b[i]);
                    }

                    int count=0;
                    int j;

                    Arrays.sort(a);

                    for(int i=0;i<N;)
                    {
                        j=i;
                        if(i!=N-1)
                        {
                            while(Math.abs(a[j])==Math.abs(a[j+1]))
                            {
                                if(j==N-2)
                                {
                                    j++;
                                    break;
                                }
                                j++;
                            }
                            
                            count++;
                            
                            i=j;
                              i++;
                        }
                        else
                        {
                            if(a[j]==a[j-1])    break;
                            else {
                                count++;i++;}
                        }
                    }
                    ans[k++]=count;
                }
            }
            for(int i=0;i<k;i++)
                System.out.println(ans[i]);
        }

    }
}
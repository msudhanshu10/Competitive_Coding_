import java.util.*;
class max
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int ans[]=new int[t];
        int k=0;

        if(t>= 1 &&  t<=50 )
        {
            while(t-->0)
            {
                int N;
                N=sc.nextInt();
                if(N>=3 && N<=1000000)
                {
                    int a[]=new int[N];
                    for(int i=0;i<N;i++)
                        a[i]=sc.nextInt();
                    int max=a[0];
                    //int key=0;
                    for(int i=1;i<N;i++)
                    {
                        if(a[i]>max)
                            max=a[i];
                        else{
                            //key=i;
                            break;
                        }
                    }
                    ans[k++]=max;
                }
            }
            for(int i=0;i<k;i++)
                System.out.println(ans[i]);
        }

    }
}
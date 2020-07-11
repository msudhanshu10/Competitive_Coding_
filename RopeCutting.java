import java.util.*;
class RopeCutting
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        String s[]=new String[t];
        int  k=0;

        if(t>=1  &&  t<=100 )
        {
            while(t-->0)
            {
                StringBuffer sb=new StringBuffer();
                int N;
                N=sc.nextInt();
                if(N>=1 && N<=100 )
                {
                    int a[]=new int[N];
                    for(int i=0;i<N;i++)
                        a[i]=sc.nextInt();
                    
                    Arrays.sort(a);
                    for(int i=0;i<N;)
                    {
                        int j=i;
                        if(j!=N-1){
                        while(a[j]==a[j+1])
                        {
                            j++;
                            if(j==N-1)
                                break;     
                        }
                    }
                        i=j;
                        if((N-1-i)!=0)
                            {sb.append(Integer.toString(N-1-i));
                        sb.append(" ");}
                        i++;
                    }
                    s[k++]=sb.toString();
                }
            }
            for(int i=0;i<k;i++)
                System.out.println(s[i].substring(0,s[i].length()-1));
        }
        sc.close();
    }
}
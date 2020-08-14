import java.util.*;
class separateList
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        
        int t=sc.nextInt();
        String s[]=new String[t];
        int k=0;

        if(t>=1 && t<=100)
        {
            while(t-->0)
            {
                int N=sc.nextInt();
                if(N>=1 && N<=100)
                {
                    int a[]=new int[N];

                    for(int i=0;i<N;i++)
                        a[i]=sc.nextInt();

                    LinkedList<Integer> odd=new LinkedList<Integer>();
                    LinkedList<Integer> even=new LinkedList<Integer>();
                    LinkedList<Integer> lst=new LinkedList<Integer>();

                    for(int i=0;i<N;i++)
                    {
                        if(a[i]%2==0)
                            even.add(a[i]);
                        else
                            odd.add(a[i]);
                    }

                    for(int i=0;i<even.size();i++)
                        lst.add(even.get(i));
                    for(int i=0;i<odd.size();i++)
                        lst.add(odd.get(i));
                    StringBuffer sb=new StringBuffer();
                    for(int i=0;i<lst.size();i++)
                    {
                        sb.append(lst.get(i));
                        sb.append(" ");
                    }
                    s[k++]=sb.toString(); 
                }
            }
            for(int i=0;i<k;i++)
                System.out.println(s[i]);
        }
        sc.close();
    }
}
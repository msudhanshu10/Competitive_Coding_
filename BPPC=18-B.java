import java.util.*;
class Solution
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        int M=sc.nextInt();
        if(N>=1 && N<=30 && M>=1 && M<=30)
        {
            int K[]=new int[N];
            String A[]=new String[N];
            int smallest=M,len;
            int key=0;
            for(int i=0;i<N;i++)
            {
                K[i]=sc.nextInt();
                A[i]=sc.nextLine();
                len=A[i].length();
                if(len<smallest)
                {
                    smallest=len;
                    key=i;
                }
            }
            for(int i=0;i<N;i++)
            {
                System.out.println(K[i]+""+A[i]);
                
            }
            System.out.println(key+""+A[key]);
            
            int count=0;

            for(int i=0;i<A[key].length();i=i+2)
            {
                char ch=A[key].charAt(i);
                System.out.print(ch+" ");
                for(int j=0;i<N;j++)
                {
                    if(A[j].contains(Character.toString(ch)))
                        count++;

                }
            }
            
            System.out.println(count);

        }
    }
}
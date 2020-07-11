import java.util.*;
class CardGame
{
    public int sumOfDigits(long a)
    {
        int digit,sum=0;
        while(a>0)
        {
            digit=(int)a%10;
            a/=10;
            sum+=digit;
        }
        return sum;
    }

    public static void main(String args[])
    {
        CardGame obj=new CardGame();
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int k=0;
        int s1[]=new int[t];
        int s2[]=new int[t];
        int win[]=new int[t];

        if(t>=1 && t<=1000)
        {
            while(t-- >0)
            {
                int n=sc.nextInt();
                if(n>=1 && n<=100)
                {
                    long a[]=new long[n];
                    long b[]=new long[n];

                    for(int i=0;i<n;i++)
                    {
                        a[i]=sc.nextLong();
                        b[i]=sc.nextLong();
                    }

                    int top=0;
                    int score_chef=0;
                    int score_monty=0;

                    for(;top<n;top++)
                    {
                        if(obj.sumOfDigits(a[top])>obj.sumOfDigits(b[top]))
                            score_chef++;
                        else if(obj.sumOfDigits(a[top])<obj.sumOfDigits(b[top]))
                            score_monty++;
                        else
                        {
                            score_chef++;
                            score_monty++;
                        }
                    }

                    if(score_chef>score_monty)
                        win[k]=0;
                    else if(score_chef<score_monty)
                        win[k]=1;
                    else
                        win[k]=2;

                    s1[k]=score_chef;
                    s2[k]=score_monty;
                    k++;
                 
                }
            }

            for(int i=0;i<k;i++)
            {
                System.out.print(win[i]+" ");
                if(win[i]==0)
                    System.out.println(s1[i]);
                else if(win[i]==1)
                    System.out.println(s2[i]);
                else
                    System.out.println(s2[i]);  
            }
        }

    }
}
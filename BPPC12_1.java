import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        int k=0;
        int sumN=0;
        int ans[]=new int[t];
        if(t>=1 && t<=100000)
        {
            while(t-- >0)
            {
                int N=sc.nextInt();
                sumN+=N;
                if(sumN<=1000000){
                if(N>=2 && N<=100000)
                {
                    int a[]=new int[N];

                    for(int i=0;i<N;i++)
                        a[i]=sc.nextInt();

                    Arrays.sort(a);

                    if(a[N-1]>=0 && a[N-1]<=1000000)
                    {
                        int prevSum=0;
                        int max=0;
                        int sum;

                        for(int i=0;i<N;i++)
                        {
                            sum=a[i]*(N-i)-prevSum;
                            if(sum>max)
                                 max=sum;
                            prevSum+=a[i];                        
                        }
                        ans[k++]=max;
                    }
                }   
            }
        }
            for(int i=0;i<k;i++)
                    System.out.println(ans[i]);
        }
    }
}
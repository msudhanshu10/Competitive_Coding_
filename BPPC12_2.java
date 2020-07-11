import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        
        Scanner sc=new Scanner(System.in);
        long N=sc.nextLong();
        if(N>=2 && N<=Math.pow(10,12))
        {
            long x,y;
            long min=N+2;
            long minX=0;
            long minY=0;
            for(long i=1;i<=N/4;i++)
            {
                if(N%i==0)
                {
                    x=N/i;
                    y=i;
                    if((x+y)<min){
                        minX=x;
                        minY=y;
                        min=x+y;}
                }
            }
            System.out.println(minX+minY-2);
        }
        
    }
}
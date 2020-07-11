import java.util.*;
import java.lang.Math;

class LargestArea
{
    int t;
    int A[];
    int B[];

    LargestArea()
    {
        Scanner sc=new Scanner(System.in);

        t=sc.nextInt();
        A=new int[t];
        B=new int[t];

        for(int i=0;i<t;i++)
        {
            A[i]=sc.nextInt();
            B[i]=sc.nextInt();
        }
        sc.close();
    }

    public double size(int a,int b)
    {
       return Math.sqrt(a*b));
    }

    public static void main(String args[])
    {
        LargestArea obj=new LargestArea();

        for(int i=0;i<obj.t;i++)
        {
            Double d=new Double(obj.size(obj.A[i],obj.B[i]));
            int value=d.intValue();
            System.out.println(value);
        }
    }


}
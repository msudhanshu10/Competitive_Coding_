import java.util.*;
import java.io.File;
import java.io.IOException;
import java.io.PrintStream;

class findroute
{
    String I,O;
    public boolean allowed(int i,int j)
    {
        if(O.charAt(i)=='Y' && I.charAt(j)=='Y')
            return true;
            else    return false;
    }

    public boolean travel_allowed(int k1,int k2)
    {
        while(Math.abs(k1-k2)!=0)
        {
            if(allowed(k1,(k1>k2)?--k1:++k1))
            {
                continue;
            }
            else return false; 
        }
        return true;
    }
    public static void main(String args[])throws IOException
    {
        Scanner sc=new Scanner(System.in);
        findroute obj=new findroute();
        File file = new File("F:\\B.txt");
        PrintStream stream = new PrintStream(file);
        System.setOut(stream);

        int t=sc.nextInt();
        if(t>=1 && t<=100)
        {
            for(int k=1;k<=t;k++)
            {
                int N=sc.nextInt();
                if(N>=2 && N<=50)
                {
                    obj.I=sc.next();
                    obj.O=sc.next();
                    System.out.println("Case #"+k+":");
                    for(int i=0;i<N;i++)
                    {
                        for(int j=0;j<N;j++)
                        {
                            if(i==j)
                                System.out.print("Y");
                            else
                            {
                                if(obj.travel_allowed(i,j))
                                    System.out.print("Y");
                                else
                                {
                                    System.out.print("N");
                                }
                            }
                        }
                        System.out.println();
                    }
                }
            }
        }
        sc.close();
    }
}
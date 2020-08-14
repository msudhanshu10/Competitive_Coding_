import java.util.*;
class Sol
{
    public String convert(String S,String q[])
    {
        StringBuffer sb=new StringBuffer(S);
        for(int i=0;i<q.length;i++)
        {
            String temp=q[i];
            System.out.println(temp);
            if(temp.equals("1"))
                sb.reverse();

            else
            {
                if(temp.charAt(2)=='1')
                    sb.insert(0,temp.charAt(4));
                else
                    sb.append(temp.charAt(4));
            }
        }
        return sb.toString();
    }

    public static void main(String[] args)
    {
        Sol obj=new Sol();
        Scanner sc=new Scanner(System.in);
        String S=sc.nextLine();
        int Q=sc.nextInt();
        String q[]=new String[6];

        for(int i=0;i<Q;i++)
            q[i]=sc.nextLine();

       
        //System.out.println(sb);

        //for(int i=0;i<Q;i++)
          //  System.out.println(q[i]);

       
        System.out.println(obj.convert(S,q));
        //sc.close();
    }
}
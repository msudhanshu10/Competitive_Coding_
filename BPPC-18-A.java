import java.util.*;
class Solution
{
    public int count_anagram(String s[])
    {
        int count=0;
        for(int j=1;j<s.length;j++)
        {
            
            for(int i=0;i<j;i++)
            {
                char s_i[]=s[i].toCharArray();
                char s_j[]=s[j].toCharArray();
                Arrays.sort(s_i);
                Arrays.sort(s_j);
                String temp1=String.copyValueOf(s_i);
                String temp2=String.copyValueOf(s_j);
                if(temp1.equals(temp2))
                    count++;
            }
        }
        return count;
    }
    public  static void main(String args[])
    {
        Solution obj=new Solution();
        Scanner sc=new Scanner(System.in);
        int N=sc.nextInt();
        if(N>=2 && N<=100000)
        {
            String s[]=new String[N];
            for(int i=0;i<N;i++)
                s[i]=sc.next();

            System.out.println(obj.count_anagram(s));
        }
        sc.close();
    }
}
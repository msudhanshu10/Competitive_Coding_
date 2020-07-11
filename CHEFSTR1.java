import java.util.*;
class CalculateString
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int t=sc.nextInt();
        if(t>=1 && t<=10)
        {
        int ans[]=new int[t];
        int k=0;
        while(t-- >0)
        {
           int  n=sc.nextInt();
           int a[]=new int[n];
            if(n>=2 && n<=100000)
            {
               
                for(int i=0;i<n;i++)
                  a[i]=sc.nextInt();
            }
            
            int count=0;
            int max=0;

            for(int i=0;i<n;i++)
            {
                if(a[i]>max)
                    max=a[i];
            }

            if(max>=1 && max<=1000000)
            {
            for(int i=0;i<n-1;i++)
            {
                if(a[i]!=a[i+1]){
                if(a[i+1]>a[i])
                    count+=a[i+1]-a[i]-1;
                else 
                    count+=(max-a[i])+a[i]-a[i+1]-1;
                }
            }
           
       ans[k++]=count;
        }
        
    
}
    sc.close();
   
    for(int i=0;i<k;i++)
        System.out.println(ans[i]);
}

}
}

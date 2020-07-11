import java.util.*;
class grading
{

  public static int grade(int a)
  {
    if(a<38)
    return a;
    else
    {
      int diff=((a/5)+1)*5-a;

      if (diff<3)
        return (((a/5)+1)*5);
      else
        return a;
      }
    }

  public static void main(String args[])
  {
    Scanner sc=new Scanner(System.in);
    int n=sc.nextInt();
    int arr[]=new int[n];
    for(int i=0;i<n;i++)
    arr[i]=sc.nextInt();

    for(int i=0;i<n;i++)
      System.out.println(grading.grade(arr[i]));

  }
}

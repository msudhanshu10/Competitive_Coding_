import java.util.*;


class diagonal_diff
{
  public int arr[][];
  public int n;

  public static int difference(diagonal_diff obj)
  {
    int d1=0,d2=0;
    for(int i=0;i<obj.n;i++){
      if(obj.arr[i][i]>=-100 && obj.arr[i][i]<=100){
    d1+=obj.arr[i][i];
    d2+=obj.arr[obj.n-1-i][i];
  }
  }
  return Math.abs(d1-d2);
  }

  public static void main(String args[])
  {
    diagonal_diff obj=new diagonal_diff();

    Scanner scin=new Scanner(System.in);
    obj.n=scin.nextInt();
    obj.arr=new int[obj.n][obj.n];

    for(int i=0;i<obj.n;i++)
    {
      for(int j=0;j<obj.n;j++)
      obj.arr[i][j]=scin.nextInt();

    }

    System.out.println(diagonal_diff.difference(obj));




  }
}

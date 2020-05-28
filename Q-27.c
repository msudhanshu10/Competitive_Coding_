/* https://practice.geeksforgeeks.org/problems/container-with-most-water/0*/

#import<stdio.h>
#import<stdlib.h>
#import<math.h>

int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

int max_area(int arr[],int l)
{
  int flag=0;
  for(int i=0;i<l;i++){
    if(arr[i]>=1&&arr[i]<=100)
    flag=1;
    else{
      flag=0;
      break;
    }
    }

  if(flag){
  int max=0,area;
  int len,width;
  for(int i=0;i<l-1;i++)
  {
    for(int j=i+1;j<l;j++)
    {
      width=abs(j-i);
      if(arr[i]<arr[j])
      len=arr[i];
      else
      len=arr[j];
      area=width*len;
      if(max<area)
      max=area;
    }
  }
  return max;
}
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=100)
  {
    int len[T];
    int input[T][50];

    for(int i=0;i<T;i++)
    {
      scanf("%d",&len[i]);
      if(len[i]>=2&&len[i]<=50){
      for(int j=0;j<len[i];j++)
      scanf("%d",&input[i][j]);
    }
  }

  for(int i=0;i<T;i++)
    printf("%d\n",max_area(input[i],len[i]));
}
return 0;
}

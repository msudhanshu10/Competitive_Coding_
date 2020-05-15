#import<stdio.h>

int noOfTest()//input no of test cases
{
  int T;
  scanf("%d",&T);
  return T;
}

void input(int len,int arr[])
{
  for(int i=0;i<len;i++)
  scanf("%d",&arr[i]);
}

int value(int len,int arr[])
{
  int count=0;
  for(int i=0;i<len;i++)
  {
    if(arr[i]>=1&&arr[i]<=1000){//given condition in question
    for(int j=i+1;j<len;j++)
    {
      if((i*arr[i])>(j*arr[j]))
      count++;
    }
  }
}
  return count;
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=100)
  {
    int arr[T][100];
    int len[T];
    for(int i=0;i<T;i++)
    {
      scanf("%d",&len[i]);
      input(len[i],arr[i]);
    }
    for(int i=0;i<T;i++)
    {
      if(len[i]>=1&&len[i]<=100)
        printf("%d\n",value(len[i],arr[i]));
    }

  }
  return 0;//End of program
}

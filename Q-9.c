#import<stdio.h>

int noOfTests()
{
  int T;
  scanf("%d",&T);
  return T;
}

int group_no(int X)
{
  if(X==1)
  return 1;
  else return X/2;
}

int main()
{
  int T=noOfTests();
  if(T>=1&&T<=400)
  {
    int input[T];
    for(int i=0;i<T;i++)
    scanf("%d",&input[i]);

    for(int i=0;i<T;i++)
    {
      if(input[i]>=1&&input[i]<=1000)
      {
        printf("%d\n",group_no(input[i]));
      }
    }
  }
}

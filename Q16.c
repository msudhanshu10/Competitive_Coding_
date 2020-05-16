/*  https://practice.geeksforgeeks.org/problems/triangular-number/0  */
#import<stdio.h>
#import<math.h>
int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

int if_triangle_number(long X)
{
  int flag=0;
  int temp=0;
  if(X==3||X==1)
  return 1;
  else{
  for(int i=1;i<=X/2;i++)
  {
    temp+=i;
    if(temp==X)
    {
      flag=1;
      break;
    }
  }
  if(flag)
  return 1;
  else return 0;}
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=100)
  {
    long long input[T];
    for(int i=0;i<T;i++)
    scanf("%lld",&input[i]);

    for(int i=0;i<T;i++)
    {
      if(input[i]>=1&&input[i]<=10000000)
      printf("%d\n",if_triangle_number(input[i]));
    }
    }
    return 0;
  }

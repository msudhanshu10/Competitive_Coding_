#import<stdio.h>
#import<math.h>

typedef struct input_array{
  long long a1;
  long long k;
}MEMBER;

int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

int min_digit(long long n)
{
  int min=9;
  while(n>0)
  {
    if(n%10<min)
    min=n%10;
    n/=10;
  }
  return min;
}

int max_digit(long long n)
{
  int max=0;
  while(n>0)
  {
    if(n%10>max)
    max=n%10;

    n/=10;
  }
  return max;
}

long long Kth_number(long long a1,long long k)
{
  long long a[k];
  a[0]=a1;
  for(int i=1;i<k;i++)
    a[i]=a[i-1]+(min_digit(a[i-1])*max_digit(a[i-1]));
    return a[k-1];
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=1000)
  {
    MEMBER input[T];
    for(int i=0;i<T;i++)
      scanf("%lld %lld",&input[i].a1,&input[i].k);

      for(int i=0;i<T;i++)
      {
        if((input[i].a1>=1&&input[i].a1<=pow(10,18))&&(input[i].k>=1&&input[i].k<=pow(10,16)))
          printf("%lld\n",Kth_number(input[i].a1,input[i].k));
      }
  }
  return 0;
}

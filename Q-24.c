#import<stdio.h>
#import<math.h>

typedef struct{
  long arr[100000];
  long l;
}MEMBER;

int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

int is_divisible_by_3(long arr[],long l)
{
  long sum=0;
  for(int i=0;i<l;i++){
    if(arr[i]>=1&&arr[i]<=pow(10,5))
  sum+=arr[i];}

  if(sum%3==0)
  return 1;
  else return 0;
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=100)
  {
    MEMBER input[T];
    for(int i=0;i<T;i++){
    scanf("%ld",&input[i].l);
    if(input[i].l>=1&&input[i].l<=pow(10,5))
    {
      for(int j=0;j<input[i].l;j++)
      scanf("%ld",&input[i].arr[j]);
    }
  }
    for(int i=0;i<T;i++)
      printf("%d\n",is_divisible_by_3(input[i].arr,input[i].l));
}
    return 0;
  }

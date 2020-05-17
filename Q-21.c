/* https://practice.geeksforgeeks.org/problems/deficient-number/0/ */
#import<stdio.h>
#import<stdlib.h>
//#import<math.h>


long noOfTest()
{
  long T;
  scanf("%ld",&T);
  return T;
}

int check_deficient_number(long n)
{
  long sum=0;
  for(long i=1;i<=n;i++){
  if(n%i==0)
  sum=sum+i;
}

  if(sum<(2*n))
  return 1;
  else
  return 0;
}

/*long divisorSum(long x)
{
  long sum=0;
  for(long i=1;i<=x;i++){
  if(x%i==0)
  sum+=i;}
  return sum;
}*/

int main()
{
  long T=noOfTest();
  if(T>=1&&T<=10000)
  {
    long input[T];
    for(long i=0;i<T;i++)
    scanf("%ld",&input[i]);

    for(long i=0;i<T;i++)
    {
      if(input[i]>=1&&input[i]<=10000)
      printf("%d\n",check_deficient_number(input[i]));
    }
  }
  return 0;
}

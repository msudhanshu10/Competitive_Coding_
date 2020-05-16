/* https://www.hackerrank.com/contests/projecteuler/challenges/euler001/problem */
#import<stdio.h>

unsigned long long noOfTest()
{
  unsigned long long T;
  scanf("%llu",&T);
  return T;
}

unsigned long long sum_of_multiple_of_3or5(unsigned long long N)
{
  unsigned long long sum=0;
  for(unsigned long long i=3;i<N;i++){
  if(i%3==0||i%5==0)
  sum+=i;}
  return sum;
}

int main()
{
  unsigned long long T=noOfTest();
  if(T>=1&&T<=100000)
  {
    unsigned long long input[T];
    for(int i=0;i<T;i++)
    scanf("%llu",&input[i]);
    for(int i=0;i<T;i++)
    {
      if(input[i]>=1&&input[i]<=1000000000)
      printf("%llu\n",sum_of_multiple_of_3or5(input[i]));
    }
  }
return 0;
}

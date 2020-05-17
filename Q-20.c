/* https://practice.geeksforgeeks.org/problems/reverse-coding/0 */
#import<stdio.h>
#import<math.h>

typedef struct arr{
   double m;
   double n;
}MEMBER;

int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

int check(double m,double n){
  double value=(m*(m/2)+m/2);
if(value==n)
return 1;
else
return 0;
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=50)
  {
    MEMBER input[T];
    for(int i=0;i<T;i++)
    scanf("%lf %lf",&input[i].m,&input[i].n);
    for(int i=0;i<T;i++)
    {
      //if((input[i].m>=1&&input[i].m<=pow(10,6))&&(input[i].n>=1&&input[i].n<=1000))
      printf("%d\n",check(input[i].m,input[i].n));
    }
  }
  return 0;
}

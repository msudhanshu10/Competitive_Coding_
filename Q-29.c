/*https://practice.geeksforgeeks.org/problems/mystic-falls-school/0*/

#import<stdio.h>


int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

int admission_number(int X,int G)
{
  return -(X-G+1);
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=900)
  {
    int X[T],G[T];

    for(int i=0;i<T;i++)
      scanf("%d %d",&X[i],&G[i]);

      for(int i=0;i<T;i++)
      {
        if(X[i]>=1&&X[i]<=10000&&G[i]>=1&&G[i]<=12)
        printf("%d\n",admission_number(X[i],G[i]));
      }
  }
  return 0;
}

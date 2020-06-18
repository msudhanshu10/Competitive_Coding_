#import<stdio.h>
int LCM(int a,int b)
{

  int max;
  if(a>b)
    max=a;
  else
  max=b;
  for(int i=max;i<=a*b;i++)
  {
    if(i%a==0&&i%b==0)
    return i;
  }

}

int main()
{
  int t;
  int max=0;
  scanf("%d",&t);
  if(t>=1&&t<=100)
  {
    int N[t];
    for(int i=0;i<t;i++)
    scanf("%d",&N[i]);

    for(int i=0;i<t;i++)
    {
      max=0;
      if(N[i]>=1&&N[i]<=1000){
      for(int j=1;j<N[i];j++)
      {
        for(int k=j;k<=N[i];k++)
        {
          if(LCM(j,k)==N[i])
          {
            if((k+j)>max)
            {
              max=k+j;
            }
          }
        }

      }
printf("%d\n",max);
    }
  }
}
return 0;
}

/*https://codeforces.com/contest/1346/problem/A*/

#import<stdio.h>
#import<math.h>

int main()
{
  int t;
  scanf("%d",&t);
  long long x[4];
  if(t>=1&&t<=1000)
  {
    long long n[t];
    int k[t];

    for(int i=0;i<t;i++)
      scanf("%lld %d",&n[i],&k[i]);

      for(int i=0;i<t;i++)
      {
        if(k[i]>=1&&k[i]<=500&&n[i]>=4&&n[i]<=pow(10,9)){
        x[0]=n[i]/(1+k[i]+(k[i]*k[i])+(k[i]*k[i]*k[i]));
        x[1]=x[0]*k[i];
        x[2]=x[1]*k[i];
        x[3]=x[2]*k[i];
        printf("%lld %lld %lld %lld\n",x[0],x[1],x[2],x[3]);
      }
    }
  }
  return 0;
}

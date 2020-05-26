/*https://practice.geeksforgeeks.org/problems/change-bits/0 */
#import<stdio.h>
#import<math.h>

long noOfTest()
{
  long t;
  scanf("%ld",&t);
  return t;
}

void convert_to_binary(long n,int arr[])
{
  int i=0;
  while(n>0)
  {
    arr[i]=n%2;
    n/=2;
    i++;
  }
  for(int j=i;j<=16;j++)
  arr[j]=0;
}

int track(int arr[])
{
  int index=0;
  for(int i=0;i<=16;i++)
  {
    if(arr[i]==1)
    index=i;
  }
  return index;
}

long new_number(int arr[])
{
  long sum=0;
  int index=track(arr);
//  printf("%d\n",index);
  for(int i=0;i<=index;i++)
  {
    if(arr[i]==0)
    arr[i]=1;
  }
  for(int i=0;i<=index;i++)
    sum+=arr[i]*pow(2,i);

    return sum;
}

int main()
{
  long T=noOfTest();
  if(T>=1&&T<=10000){

    long arr[T];
    int bin[T][17];
    for(int i=0;i<T;i++)
    scanf("%ld",&arr[i]);

    for(int i=0;i<T;i++)
    {
      if(arr[i]>=1&&arr[i]<=pow(10,5))
      {
        convert_to_binary(arr[i],bin[i]);
        printf("%ld %ld\n",(new_number(bin[i])-arr[i]), new_number(bin[i]));
      }
    }
}
return 0;
}

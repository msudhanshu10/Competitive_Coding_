
#import<stdio.h>

int noOfTests()
{
  int T;
  scanf("%d",&T);
  return T;
}

void convert_to_binary(int arr[],int N)
{
  int i=0;
  while(N>0)
  {
    arr[7-i]=N%2;
    N/=2;
    i++;
  }
  for(int i=7-i;i>=0;i++)
  arr[i]=0;
}

int no_of_set_bits(int arr[])
{
  int count=0;
  for(int i=0;i<8;i++)
  {
    if(arr[i]==1)
    count++;
  }
  return count;
}

int main()
{
  int T=noOfTests();
  if(T>=1&&T<=200)
  {
    int arr[8];
    int input[T];
    for(int i=0;i<T;i++)
    scanf("%d",&input[i]);

    for(int i=0;i<T;i++)
    {
      if(input[i]>=1&&input[i]<=200)
      {
        convert_to_binary(arr,input[i]);
        printf("%d\n",no_of_set_bits(arr));
      }
    }
}
}

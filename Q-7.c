/*Given a number N. The task is to find the length of the longest consecutive 1s in its binary representation.

Input:
The first line of input contains an integer T denoting the number of test cases. Then T test cases follow. Each test case contains an integer N.

Output:
For each test case, in a new line, print the length of the longest consecutive 1's in N's binary representation.

Constraints:
1 <= T < 100
1 <= N <= 103

Example:
Input:
2
14
222

Output:
3
4

Explanation:
Testcase 1: Binary representation of 14 is 1110, in which 111 is the longest consecutive set bits and length is 3.........*/

#import<stdio.h>

int noOfTests()
{
  int T;
  scanf("%d",&T);
  return T;
}

void convert_to_binary(int N,int arr[])
{
  int i=0;
  while(N>0)
  {
    arr[9-i]=N%2;
    N/=2;
    i++;
  }

  for(int j=9-i;j>=0;j--)
  arr[j]=0;
  for(int i=0;i<10;i++)
  printf("%d",arr[i]);
  printf("\n");
}

int max_consecutive_set_bits(int arr[],int n)
{
  int count=0,max=0;
  for(int i=0;i<n;i++)
  {
    if(arr[i]==1)
      count++;
      else
      {
      if(count>max)
      max=count;
      count=0;
  }
if(i==9)
{
  if(count>max)
  max=count;
  count=0;
}}
  return max;
}

int main()
{
  int T=noOfTests();
  if(T>=1&&T<=100){
  int input[T];
  int arr[10];
  for(int i=0;i<T;i++)
  scanf("%d",&input[i]);

  for(int i=0;i<T;i++)
  {
    if(input[i]>=1&&input[i]<=1000)
    {
      convert_to_binary(input[i],arr);
      printf("%d\n",max_consecutive_set_bits(arr,10));
    }
  }


}
}

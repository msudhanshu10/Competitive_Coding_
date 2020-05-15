/*You are given a number N. Find the total count of set bits for all numbers from 1 to N(both inclusive).

Input:
The first line of input contains an integer T denoting the number of test cases. T testcases follow. The first line of each test case is N.

Output:
For each testcase, in a new line, print the total count of all bits.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 103

Example:
Input:
2
4
17
Output:
5
35

Explanation:
Testcase1:
An easy way to look at it is to consider the number, n = 4:
0 0 0 = 0
0 0 1 = 1
0 1 0 = 1
0 1 1 = 2
1 0 0 = 1
Therefore , the total number of bits is 5*/

#import<stdio.h>

int noOfTests()
{
  int T;
  scanf("%d",&T);
  return T;
}

void convert_to_binary(int N,int arr[N][8])
{
  int n;
  int i,j,k;
  int count=0;

  for(i=1;i<=N;i++)
  {
    n=i;
    j=0;
    while(n>0)
    {
      arr[i-1][7-j]=n%2;
      n/=2;
      j++;
    }
    for(k=7-j;k>=0;k--)
    arr[i-1][k]=0;
  }
}

int count_set_bits(int N,int arr[N][8])
{
  int count=0;
  for(int i=0;i<N;i++)
  {
    for(int j=0;j<8;j++)
    {
      if(arr[i][j]==1)
      count++;
    }
  }
  return count;
}

int main()
{
  int T=noOfTests();
  if(T>=1&&T<=100)
  {
    int input[T];
    for(int i=0;i<T;i++)
      scanf("%d",&input[i]);

      for(int i=0;i<T;i++)
      {
        if(input[i]>=1&&input[i]<=103)
        {
          int arr[input[i]][8];
          convert_to_binary(input[i],arr);
          printf("%d\n",count_set_bits(input[i],arr));
        }
      }
  }
}

/*The whitewalkers are here and the Great War is on. Each and every living being is giving their best to save the world from the dead. Arya fighting with full dedication found that whitewalkers need to be killed with a pattern or else they wont die. So that she can fight till the end of the war. She tried to understand the pattern. She kills every 'Xth' whitewalker by stabbing them 'N' times .
Whitewalker approaching order (X)    Number of times-stabbing(N)
1                                                                1
2                                                                1
3                                                                2
.                                                                 .
.                                                                 .
55                                                              5
.                                                                 .
98                                                              3
.                                                                  .
.                                                                  .
101                                                             4
.                                                                  .
.                                                                  .
.                                                                  .

198                                                              4
This is the hint of the pattern that Arya needs to follow. Help Arya!

Input:
The first line of the input contains an integer T, denoting the number of test cases. The description of each testcase follows. Each test case contains a single line with one integer 'X' the Xth whitewalker  .

Output:
For each test case in, a new line print the number of stabs required to kill the 'Xth' whitewalker.

Constraints:
1 <= T <= 200
1 <= X <= 200

Example:
Input:
4
102
95
72
60

Output:
4
6
2
4............*/

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
  for(int j=7-i;j>=0;j--)
  arr[j]=0;
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
  //printf("%d\n",T);
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
        //for(int i=0;i<8;i++)
        //printf("%d",arr[i]);
        //printf("\n");
        printf("%d\n",no_of_set_bits(arr));
      }
    }
}
}

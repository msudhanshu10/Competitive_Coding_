/*..........Given an unsigned integer N. The task is to swap all odd bits with even bits. For example, if the given number is 23 (00010111), it should be converted to 43(00101011). Here, every even position bit is swapped with adjacent bit on right side(even position bits are highlighted in binary representation of 23), and every odd position bit is swapped with adjacent on left side.

Input:
The first line of input contains T, denoting the number of testcases. Each testcase contains single line.

Output:
For each testcase in new line, print the converted number.

Constraints:
1 ≤ T ≤ 100
1 ≤ N ≤ 100

Example:
Input:
2
23
2

Output:
43
1

Explanation:
Testcase 1: BInary representation of the given number; 00010111 after swapping 00101011........*/

#import<stdio.h>
#import<Math.h>

int noOfTests()
{
  int T;
  scanf("%d",&T);
  return T;
}
int swap(int N)
{
  int arr[8];
  int newValue=0;
  int i=0,temp;
  while(N>0)
  {
    arr[7-i]=N%2;
    N/=2;
    i++;
  }
  for(int j=0;j<=7-i;j++)
  arr[j]=0;

  for(int i=0;i<8;i=i+2)
  {
    temp=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=temp;
  }

  for(int i=0;i<8;i++)
    newValue=newValue+pow(2,i)*arr[7-i];

return newValue;
}

int main()
{
  int T=noOfTests();
  if(T>=1&&T<=100){
  int input[T];
  for(int i=0;i<T;i++)
  scanf("%d",&input[i]);

  for(int i=0;i<T;i++)
  {
    if(input[i]<=100&&input[i]>=1)
    printf("%d\n",swap(input[i]));
  }
}
}

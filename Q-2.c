/*Given a number N, Write a program to find a number which is greater than or equal to N and is a smallest power of 2.

Input:
First line of input contains a single integer T which denotes the number of test cases. Then T test cases follows. First line of each test case contains a single integer N.

Output:
For each test case, print a number which is greater than or equal to N and is a nearest power of 2.

Constraints:
1<=T<=100
1<=N<=100000

Example:
Input:
4
5
1
17
32
Output:
8
1
32
32.............*/


#import<stdio.h>

int noOfTests()//input no of test cases.
{
  int N;
  scanf("%d",&N);
  return N;
}

int checkPowerOfTwo(int N)//to check whether N is in powers of 2
{
  int flag;
  while(1){
  if(N%2==0&&N>1){

    N=N/2;
    flag=1;}
    else if(N==1)
    {
      flag=1;
      break;
    }
  else{
  flag=0;
  break;}
}
return flag;
}

void generateOutput(int N)
{
  int i=N;
  while(i>=N)
  {
    if(checkPowerOfTwo(i)){
    printf("%d\n",i);
    break;}
    else{
      i++;
      continue;
    }
  }
}

int main()
{
  int T=noOfTests();
  if(T>=1&&T<=100){
  int arr[T];
  for(int i=0;i<T;i++)
  scanf("%d",&arr[i]);
  for(int i=0;i<T;i++){
  if(arr[i]>=1&&arr[i]<=100000)
  generateOutput(arr[i]);}
}
}

/*Given a series of numbers 2, 10, 30, 68, 130.., Identify the pattern in the series and help to identify the integers at other indices. Indices are starting from 1.

Input:
The input line contains T, denoting the number of test cases. The description of each testcase follows. Each test case contains a single line with 1 integer X (index) .

Output:
For each testcase in new line, print number at the Xth index .

Constraints:
1 ≤ T ≤ 200
1 ≤ X ≤ 200

Example:
Input:
4
8
12
200
145

Output:
520
1740
8000200
3048770*/

#import<stdio.h>
#import<math.h>

int noOfTests()
{
  int T;
  scanf("%d",&T);
  return T;
}

long generateTerm(int X)
{
  long value=(pow(X,3)+X);
  return value;
}

int main()
{
  int T=noOfTests();
  if(T<=200&&T>=1)
  {
      int X[T];
      for(int i=0;i<T;i++)
        scanf("%d",&X[i]);
        for(int i=0;i<T;i++)
        {
          if(X[i]>=1&&X[i]<=200)
          printf("%ld\n",generateTerm(X[i]));
        }
      }
      return 0;
    }

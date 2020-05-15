/*Given a string s, find the minimum number of changes required to it so that all substrings of the string become distinct.

Note: length of string is atmost 26.

Input:
The first line contains an integer T, number of test cases. For each testcase there is only one line containing s atmost 26 characters.

Output:
For each testcase in new line, print the minimum number of changes to the string.

Constraints:
1 <= T <= 100
1 <= |s| <= 26

Example:
Input
3
aab
aebaecedabbee
ab

Output
1
8
0..............*/
#import<stdio.h>
#import<string.h>

int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

int no_of_changes(char str[])
{
  int len=strlen(str);
  int count=0,temp=0;
    for(char ch='a';ch<='z';ch++)
    {
      temp=0;
      for(int i=0;i<=len;i++)
      {
      if(ch==str[i])
        temp++;
      }
      if(temp>1)
        count+=(temp-1);
    }
  return count;
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=100)
  {
    char str[T][27];
    for(int i=0;i<T;i++)
    scanf("%s",str[i]);

    for(int i=0;i<T;i++)
    {
      if(strlen(str[i])>=1&&strlen(str[i])<=26)
      printf("%d\n",no_of_changes(str[i]));
  }
}
}

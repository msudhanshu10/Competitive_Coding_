/*Given an array arr[] of size N where every element is in range from 0 to n-1. Rearrange the given array so that arr[i] becomes arr[arr[i]]. This should be done with O(1) extra space.

Input:
First line contains an integer denoting the test cases 'T'. First line of each test case contains an integer value depicting size of array 'N' and next line contains N space separated integers denoting the elements of the array.

Output:
Print all elements of the array after rearranging, each separated by a space, in separate line for each test case.

Constraints:
1 <= T <= 100
1 <= N<= 107
0 <= Arr[i] < N

Example:
Input:
3
2
1 0
5
4 0 2 1 3
4
3 2 0 1

Output:
0 1
3 4 2 0 1
1 0 3 2

Explanation:
Testcase 1: arr[0] = 1 and arr[arr[0]] = 0. Also, arr[1] = 0 and arr[arr[1]] = 1. So, rearranging elements, we get array as, 0 1. */
#import<stdio.h>

int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

void input(int arr[],long long len)
{
  for(int i=0;i<len;i++)
  scanf("%d",&arr[i]);
}
void change_array(int *p,long long len)
{
  int brr[len];
  int *q=p;
  for(int j=0;j<len;j++)
  {
    printf("%d ",*p);
    p=p+1;
  }
  p=q;
  printf("\n");
  for(int i=0;i<len;i++){
    brr[i]=*(p=p+(*p));
    q++;
    p=q;
      }

    for(int i=0;i<len;i++)
    printf("%d ",brr[i]);
    printf("\n");
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=100)
  {
    int *p[T];
    long long len[T];
    for(int i=0;i<T;i++)
    {
      scanf("%lld",&len[i]);
      if(len[i]>=1&&len[i]<=100){
      int arr[len[i]];
      /*for(int j=0;i<len[i];j++)
      scanf("%d",&arr[j]);*/

      input(arr,len[i]);
      p[i]=arr;
      /*for(int j=0;j<len[i];j++)
      {
        printf("%d ",*p[i]);
        p[i]=p[i]+1;
      }
      printf("\n");*/
    }
    }
    for(int i=0;i<T;i++)
    {
      for(int j=0;j<len[i];j++){
      printf("%d ",*p[i]);
      p[i]++;}
      printf("\n");
    }
    for(int i=0;i<T;i++)
      change_array(p[i],len[i]);
}
return 0;
}

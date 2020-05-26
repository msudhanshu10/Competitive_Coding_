/* https://practice.geeksforgeeks.org/problems/kth-smallest-element/0
   This program deals with the real time memory allocation of an array.
   It involves extensive use of pointer concepts.
   */
#import<stdio.h>
#import<math.h>
#import<stdlib.h>


int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

void sort(long *p,long N,long K,long arr[],int index)
{
  long temp,*c;
  long *q;
  q=p;
  c=p;

  for(int i=0;i<N;i++)
  {
    q=p;
    if(*p>=1&&*p<=pow(10,5)){
    for(int j=i;j<N;j++)
    {

      if(*q<*p)
      {
        temp=*p;
        *p=*q;
        *q=temp;
      }
        q++;
    }
  }
  p++;
}
p=c;
q=c;
p=p+(K-1);
arr[index]=*p;
p=c;
}

long Kth_Smallest_Element(long *p,long N,long K)
{
  p=p+(K-1);
  return *p;
}

int main(){
  int T=noOfTest();
  if(T>=1&&T<=100)
  {
    long N,K,temp;
    long *p,*q,*c;
    q=p;
    long arr[T],brr[T];
    c=arr;

    for(int i=0;i<T;i++)
    {
      scanf("%ld",&N);

      long *arr=malloc(N*sizeof(long));
      p=arr;
      q=p;
      for(int j=0;j<N;j++){
      scanf("%ld",&temp);
      *p=temp;
    p++;}
      p=q;

      scanf("%ld",&K);
      sort(p,N,K,arr,i);
      brr[i]=arr[i];
    }

      p=q;


    for(int i=0;i<T;i++)
    {
      if((N>=1&&N<=pow(10,5))&&(K>=1&&K<=N)){
        printf("%ld\n",brr[i]);
    }
  }
}
  return 0;
}

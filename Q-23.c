/* Trial problem on codeforces */
#import<stdio.h>

typedef struct{
  long a;
  long b;
}MEMBER;

long noOfTest()
{
  long T;
  scanf("%ld",&T);
  return T;
}

int main()
{
  long T=noOfTest();
  if(T>=1&&T<=10000){
  MEMBER input[T];

  for(int i=0;i<T;i++)
  scanf("%ld %ld",&input[i].a,&input[i].b);

  for(int i=0;i<T;i++){
    if(input[i].a>=-1000&&input[i].a<=1000&&input[i].b>=-1000&&input[i].b<=1000)
  printf("%ld\n",input[i].a+input[i].b);
}}
return 0;
}

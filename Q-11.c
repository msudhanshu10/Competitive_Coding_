#import<stdio.h>
#import<string.h>
#import<stdlib.h>
#import<Math.h>

typedef struct strarray{
  char str[2][101];
}MEMBER;

int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

int value(char str[2][101])
{
  int bin[]={atoi(str[0]),atoi(str[1])};
  int prod=bin_to_dec(bin[0])*bin_to_dec(bin[1]);
  return prod;
}

int bin_to_dec(int bin)
{
  int i=0,dec=0;
  while(bin>0){
    dec=dec+((bin%10)*pow(2,i++));
    bin/=10;}
    return dec;
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=100)
  {
  MEMBER string[T];
  for(int i=0;i<T;i++)
  scanf("%s %s",string[i].str[0],string[i].str[1]);

  for(int i=0;i<T;i++)
    printf("%d\n",value(string[i].str));
}
    return 0;

}

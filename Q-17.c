/* https://practice.geeksforgeeks.org/problems/overlapping-rectangles/0/ */
#import<stdio.h>
#import<stdlib.h>

typedef struct arrays{
  int arr1[4];
  int arr2[4];
}MEMBER;

int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

int bigger_Area(int l1,int b1,int l2,int b2)
{
  if(l1*b1>l2*b2)
  return 1;
  else
  return 0;
}
void generate_coordinate_array(int arr[],int X[],int Y[])
{
  X[0]=arr[0];X[1]=arr[2];X[2]=arr[2];X[3]=arr[0];
  Y[0]=arr[3];Y[1]=arr[3];Y[2]=arr[1];Y[3]=arr[1];
}

int check_overlapping_rectangle(int arr1[],int arr2[])
{
  int X1low=arr1[0],X1high=arr1[2],Y1low=arr1[3],Y1high=arr1[1];
  int X2low=arr2[0],X2high=arr2[2],Y2low=arr2[3],Y2high=arr2[1];
  int temp;
  if(X1low>X1high){
    temp=X1high;
    X1high=X1low;
    X1low=temp;
  }
  if(X2low>X2high){
    temp=X2high;
    X2high=X2low;
    X2low=temp;
  }
  if(Y1low>Y1high){
    temp=Y1high;
    Y1high=Y1low;
    Y1low=temp;
  }
  if(Y2low>Y2high){
    temp=Y2high;
    Y2high=Y2low;
    Y2low=temp;
  }
  //printf("%d %d %d %d %d %d %d %d\n",X1low,X1high,Y1low,Y1high,X2low,X2high,Y2low,Y2high);
  int X[4],Y[4];
  if(bigger_Area(abs(X1low-X1high),abs(Y1low-Y1high),abs(X2low-X2high),abs(Y2low-Y2high)))
  {
    generate_coordinate_array(arr2,X,Y);
    if(((X[0]>X1low&&X[0]<X1high)&&(Y[0]>Y1low&&Y[0]<Y1high)) || ((X[1]>X1low&&X[1]<X1high)&&(Y[1]>Y1low&&Y[1]<Y1high)) || ((X[2]>X1low&&X[2]<X1high)&&(Y[2]>Y1low&&Y[2]<Y1high)) || ((X[3]>X1low&&X[3]<X1high)&&(Y[3]>Y1low&&Y[3]<Y1high)))
    return 1;
    else
    return 0;
  }
  else
  {
    generate_coordinate_array(arr1,X,Y);
    if(((X[0]>X2low&&X[0]<X2high)&&(Y[0]>Y2low&&Y[0]<Y2high)) || ((X[1]>X2low&&X[1]<X2high)&&(Y[1]>Y2low&&Y[1]<Y2high)) || ((X[2]>X2low&&X[2]<X2high)&&(Y[2]>Y2low&&Y[2]<Y2high)) || ((X[3]>X2low&&X[3]<X2high)&&(Y[3]>Y2low&&Y[3]<Y2high)))
    return 1;
    else
    return 0;
  }
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=10)
  {
    MEMBER input[T];
    //int input[T][4];
    for(int i=0;i<T;i++)
    {
      for(int j=0;j<4;j++)
      scanf("%d",&input[i].arr1[j]);
      for(int j=0;j<4;j++)
      scanf("%d",&input[i].arr2[j]);
    }

    for(int i=0;i<T;i++)
      printf("%d\n",check_overlapping_rectangle(input[i].arr1,input[i].arr2));
  }
  return 0;
}

#include<iostream>

int countBuildings(int arr[],int N)
{
  int min=0,count=0;
  for(int i=0;i<N;i++)
  {
    if(arr[i]>=min)
    count++;
    min=arr[i];
  }
  return count;
}

int main()
{
  int t;
  cin>>t;
  if(t>=1 && t<=100)
  {
    int arr[t][100];
    int N[t];
    for(int i=0;i<t;i++)
    {
      cin>>N[i];
      for(int j=0;j<N[i];j++)
      cin>>arr[i][j];
    }

    for(int i=0;i<t;i++)
    {
      cout<<countBuildings(arr[i],N[i])<<"\n";
    }


  }
  return 0;
}

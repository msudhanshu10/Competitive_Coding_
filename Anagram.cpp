#include<iostream>
#include<string>
using namespace std;


void sort(string* s)
{
  char temp;
  for(int i=0;i<(*s).length()-1;i++)
  {

    for(int j=i+1;j<(*s).length();j++)
    {
      if((*s)[j]>(*s)[i])
      {
          temp=(*s)[i];
        (*s)[i]=(*s)[j];
        (*s)[j]=temp;
      }
    }
  }
}





int main()
{
  int t;
  cin>>t;
  if(t>=1&&t<=300){
  string A[t];
  string B[t];

  for(int i=0;i<t;i++)
    cin>>A[i]>>B[i];

    for(int i=0;i<t;i++)
    {
      sort(A[i]);
      sort(B[i]);
      if(!strcmp(A[i],B[i]))
      cout<<"YES"<<"\n";
      else
      cout<<"NO"<<"\n";
    }
  }
    return 0;
}

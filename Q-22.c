/* Program to find out the row echelon form the given 3*3 matrix */
/*Program also finds out the rank the given 3*3 matrix*/
/*Algorithm used in this program is basic method that is required to find out the REF of a matrix
    taught in Linear Algebra course*/

#import<stdio.h>

float temp[3];
typedef struct{
  float a[3][3];
}MEMBER;

int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

void input_Matrix(float a[3][3])
{
  for(int i=0;i<3;i++)//take input
  {
    for(int j=0;j<3;j++)
      scanf("%f",&a[i][j]);
  }
}

void print_Matrix(float a[3][3]){
for(int i=0;i<3;i++)
{
  for(int j=0;j<3;j++)
  printf("%f ",a[i][j]);
  printf("\n");
}
}

void funct1(float a[3][3])
{
  a[0][2]=a[0][2]/a[0][0];
  a[0][1]=a[0][1]/a[0][0];
  a[0][0]=a[0][0]/a[0][0];

   if(a[1][0]!=0)
   for(int i=2;i>=0;i--)
     a[1][i]=a[1][i]-a[1][0]*a[0][i];

   if(a[2][0]!=0)
   for(int i=2;i>=0;i--)
     a[2][i]=a[2][i]-a[2][0]*a[0][i];

     if(a[1][1]!=0)
     {
       a[1][2]=a[1][2]/a[1][1];
       a[1][1]=a[1][1]/a[1][1];
     }
     else if(a[2][1]!=0){
       temp[0]=a[2][1];
       temp[1]=a[2][2];
       a[2][1]=a[1][1];
       a[2][2]=a[1][2];
       a[1][1]=temp[0];
       a[1][2]=temp[1];
       a[1][2]=a[1][2]/a[1][1];
       a[1][1]=a[1][1]/a[1][1];
     }
       else{
         if(a[1][2]!=0){
           a[1][2]=1;
           if(a[2][2]!=0)
           a[2][2]=a[2][2]-a[2][2]*a[1][2];}
           else{
             if(a[2][2]!=0)
             {
             temp[0]=a[2][2];
             a[2][2]=a[1][2];
             a[1][2]=temp[0];

             a[1][2]=1;
             if(a[2][2]!=0)
             a[2][2]=a[2][2]-a[2][2]*a[1][2];}
           }
           }
           if(a[2][1]!=0)
           {
             a[2][2]=a[2][2]-a[2][1]*a[1][2];
             a[2][1]=a[2][1]-a[2][1]*a[1][1];
             if(a[2][2]!=0)
             a[2][2]=1;
           }

  }

  void funct2(float a[3][3])
  {
    a[0][2]=a[0][2]/a[0][1];
    a[0][1]=1;
    if(a[1][1]!=0)
    {
      a[1][2]=a[1][2]-a[1][1]*a[0][2];
      a[1][1]=a[1][1]-a[1][1]*a[0][1];
    }
    if(a[2][1]!=0){
      a[2][2]=a[2][2]-a[2][1]*a[0][2];
      a[2][1]=a[2][1]-a[2][1]*a[0][1];
    }
    if(a[1][2]!=0){
      a[1][2]=1;
      if(a[2][2]!=0)
      a[2][2]=a[2][2]-a[2][2]*a[1][2];
    }
    else if(a[2][2]!=0){
      temp[0]=a[2][2];
      a[2][2]=a[1][2];
      a[1][2]=temp[0];

      a[1][2]=1;
      if(a[2][2]!=0)
      a[2][2]=a[2][2]-a[2][2]*a[1][2];
    }
    else{printf("\n");}
  }

void ref(float a[3][3])
{
  int flag;
  for(int i=0;i<3;i++){
  for(int j=0;j<3;j++){
  if(a[i][j]>=-100&&a[i][j]<=100)
  flag=1;
else {
  flag=0;
  break;
}}}
  if(flag){
  if(a[0][0]!=0)
    funct1(a);

    else{
      if(a[1][0]!=0)
      {
      temp[0]=a[0][0];
      temp[1]=a[0][1];
      temp[2]=a[0][2];
      a[0][0]=a[1][0];
      a[0][1]=a[1][1];
      a[0][2]=a[1][2];
      a[1][0]=temp[0];
      a[1][1]=temp[1];
      a[1][2]=temp[2];
      funct1(a);
    }

      else if(a[2][0]!=0)
      {
        temp[0]=a[0][0];
        temp[1]=a[0][1];
        temp[2]=a[0][2];
        a[0][0]=a[2][0];
        a[0][1]=a[2][1];
        a[0][2]=a[2][2];
        a[2][0]=temp[0];
        a[2][1]=temp[1];
        a[2][2]=temp[2];
        funct1(a);
      }

        else{
          if(a[0][1]!=0)
          funct2(a);
          else{
            if(a[1][1]!=0){
              temp[0]=a[0][1];
              temp[1]=a[0][2];
              a[0][1]=a[1][1];
              a[0][2]=a[1][2];
              a[1][1]=temp[0];
              a[1][2]=temp[1];
              funct2(a);
            }
            else if(a[2][1]!=0){
              temp[0]=a[0][1];
              temp[1]=a[0][2];
              a[0][1]=a[2][1];
              a[0][2]=a[2][2];
              a[2][1]=temp[0];
              a[2][2]=temp[1];
              funct2(a);
            }
            else
            {
              if(a[0][2]!=0)
              {
                a[0][2]=1;
                a[1][2]=0;
                a[2][2]=0;
              }
              else
              {
                if(a[1][2]!=0)
                {
                temp[0]=a[0][2];
                a[0][2]=a[1][2];
                a[1][2]=temp[0];

                a[0][2]=1;
                a[1][2]=0;
                a[2][2]=0;
              }

                else if(a[2][2]!=0)
                {
                  temp[0]=a[0][2];
                  a[0][2]=a[1][2];
                  a[1][2]=temp[0];

                  a[0][2]=1;
                  a[1][2]=0;
                  a[2][2]=0;
                }
                else{printf("\n");}
              }
            }
          }
        }
      }
}}

int calculate_rank(float a[3][3])
{
  int count=0;
  for(int i=0;i<3;i++)
  {
    if(a[i][0]==0.0&&a[i][1]==0.0&&a[i][2]==0.0)
    count++;
  }
  return (3-count);
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=100){
  MEMBER input[T];
  for(int i=0;i<T;i++)
  input_Matrix(input[i].a);

  for(int i=0;i<T;i++)
  ref(input[i].a);

for(int i=0;i<T;i++)
  printf("%d\n",calculate_rank(input[i].a));
      return 0;
    }
  }

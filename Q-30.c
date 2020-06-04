/**/
#import<stdio.h>
#import<stdlib.h>

int noOfTest()
{
  int t;
  scanf("%d",&t);
  return t;
}

typedef struct List
{
  int data;
  struct List *next;
}Node;

Node* createList(int N)
{
  Node *head=malloc(N*sizeof(Node));
  Node *current;
  current=head;

  for(int i=0;i<N;i++)
  {
    scanf("%d",&current->data);
    if(i!=N-1)
    current->next=current+1;
    else
    current->next=head;

    current++;
  }
  return head;
}

void print_list(Node *head)
{
  int ref_data=head->data;
  Node *current;
  current=head;
  //printf("%d\n",current->data);
  do {
    printf("%d->",current->data);
    current=current->next;
  } while(current->data!=ref_data);
  printf("\n");
}

Node* delete_At(Node *head,int data,int N)
{
  print_list(head);
  Node *current,*post_node;
  current=head;
  int ref_data=head->data;

  if(current->data==data)
  {
    head=current+1;
    (current+N-1)->next=head;
    free(current);
  }

  else if((current+N-1)->data!=data)
  {
    do
    {
      post_node=current+1;
      if(current->data==data)
      {
        (current-1)->next=(current+1);
        free(current);
      }
      current=post_node;
    }while(current->data!=ref_data);
  }

  else{
    (current+N-2)->next=head;
    free(current+N-1);
  }
  return head;
}


int main()
{
  //int T=noOfTest();
  //if(T>=1&&T<=200)
  //{

  Node *head=createList(6);
  print_list(head);
  head=delete_At(head,3,6);
  print_list(head);
  head=delete_At(head,2,5);
    print_list(head);
}

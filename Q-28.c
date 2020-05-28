/**/
#import<stdio.h>
#import<stdlib.h>

typedef struct List{
  int data;
  struct List *next;
}Node;

Node *head;

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
    current->next=NULL;

    current++;
  }
  return head;
}

void print_list(Node *head)
{
  Node *current=head;
  while(current!=NULL)
  {
    printf("%d ",current->data);
    current=current->next;
  }
  printf("\n");
}

Node* delete_At(Node *head,int data)
{
  Node *current;
  current=head;
  if(current->data==data)
  {
    head=current+1;
    free(current);
  }
  else{
    while(current!=NULL)
    {
      if(current->data==data)
      {
        (current-1)->next=(current+1);
        free(current);
      }
      current=current->next;
    }
  }
  return head;
}

int noOfTest()
{
  int T;
  scanf("%d",&T);
  return T;
}

Node* generate_new_List(Node *head)
{
  Node *current,*next_node;
  current=head;
  next_node=head+1;
  while(current->next!=NULL)
  {
    if((next_node->data)>(current->data))
    head=delete_At(head,current->data);

    current=next_node;
    next_node++;
  }
  return head;
}

int main()
{
  int T=noOfTest();
  if(T>=1&&T<=1000)
  {
    int N[T];
    Node *head[T];
    for(int i=0;i<T;i++)
    {
      scanf("%d",&N[i]);
      if(N[i]>=1&&N[i]<=1000)
      head[i]=createList(N[i]);
    }

    for(int i=0;i<T;i++)
    {
      head[i]=generate_new_List(head[i]);
      print_list(head[i]);
    }
}
  return 0;
}

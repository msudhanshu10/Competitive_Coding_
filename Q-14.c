#import<stdio.h>
#import<stdlib.h>

typedef struct linked_list{
  int data;
  struct linked_list *next;
}NODE;

NODE* create_list(int N)
{
  NODE *list=malloc(N*sizeof(NODE));
  NODE *head=list;
  for(int i=0;i<N;i++){
    scanf("%d",&list->data);
    if(i!=N-1)
    list->next=(list+1);
    else
    list->next=NULL;
    list=list+1;
  }
  return head;
}


void traverse_linked_list(NODE *head)
{
  NODE *current=head;
  while(current!=NULL)
  {
    printf("%d=>",current->data);
    current=current->next;
  }
}
int main()
{
  NODE *head=create_list(5);
  traverse_linked_list(head);
}

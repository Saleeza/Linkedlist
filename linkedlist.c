#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
typedef struct node_l
{
    int data;
    struct node_l *link;
} node ;

int create( node *head)
{ 
    
    int item;
    int ch=1,option;
    if(head==NULL)
    {
        printf("------the list is empty----");
        
    }
     
     else
     { 
         
          node* temp= ( node*)malloc(sizeof( node));
          temp=head;

         while (ch==1)

        {  printf("\nenter the element we want to enter in linkedlist : ");
         scanf("%d",&item);
          node* new= ( node*)malloc(sizeof( node));
          
          temp->link=new;
          new->data=item;
          new->link=NULL;
          temp=new;
          printf("\n element entered successfully \n\n");
       printf("  1)  continue\n ");
       printf(" 2)  discontinue   :");
       scanf("%d",&option);
       ch=option;
        }
        
     }
     return 0;
}
void print( node *head)
{
    node *t;
   
    if (head==NULL)
    {
        printf("------linked list is empty----");
     return ;
    }
    else
    
    { 
        t=head;
        while(t!=NULL)
        {
            printf("\n\t%d",t->data);
            t=t->link;
        }
    }
    
}
int main()
{
    
    node* head= ( node*)malloc(sizeof( node));
     head->data=7;
     head->link=NULL;
     print(head);
     
     create(head);
     print(head);

}
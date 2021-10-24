
#include<stdio.h>
#include<stdlib.h>

struct node*f=NULL;
struct node*r=NULL;

struct node{
    struct node* next;
    int data;
};
void linkedListTraversal(struct node*ptr){
     while (ptr!=NULL)
     {
         printf("Element : %d \n",ptr->data );
           ptr=ptr->next ;
     }
 }

void enqueue(int val ){
    struct node* n=(struct node*)malloc(sizeof(struct node ));
    if (n==NULL){
        printf ("queue is overflow");
    }
    else{
        n->data=val;
        n->next=NULL;
        if(f==NULL)
        {
            f=n=n;
        }
        else{
            r->next=n;
            r=n;
        }
    }
}
int  dequeue(){
    int val =-1;
    struct node *ptr=f;
    if (f==NULL)
    {
        printf("queue is underflow ");
    }
    else{
        f=f->next;
        val=ptr->data;
        free(ptr);

    }
    return val;
}

int main ()
{
    linkedListTraversal(f);
    //printf("dequeue element %d\n ",dequeue());
    enqueue(445);
    enqueue(745);
    enqueue(645);
    enqueue(12335);
    linkedListTraversal(f);
    return 0;
}



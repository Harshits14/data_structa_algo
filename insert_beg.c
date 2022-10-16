#include <stdio.h>
void main()
{
    struct node  
    {
        int info;
        struct node *next;
        
    };
    typedef struct node NODE;


NODE * insertbeg(NODE *start,int val)
{
    struct node* newNode = (struct node*)malloc(sizeof(NODE));
    newNode->info = val;
    newNode->next  = start; 
    
    start = newNode;
  	return start;
}
NODE * insert_end(NODE *start,int val)
{
	struct node* newNode = (struct node*)malloc(sizeof(NODE));
    newNode-> info=val;
    newNode->next = NULL;
    
    NODE* curr = start;
    while(curr->next != NULL)
    {
        curr=  curr->next;
    }
    curr->next = newNode;
    
	return start;
}
NODE * insert_loc(NODE *start,int val,int loc)
{
    	struct node* newNode = (struct node*)malloc(sizeof(NODE));

	NODE* curr1 =  start;
    NODE*  curr2 = curr1->next;  
    for(int i=1;i<(loc-1);i++)
    {
curr1 = curr1-> next;
curr2 = curr2-> next;
 }
    
    curr1.next = newNode;
    newNode->info=val;
    newNode.next-> info;




    
	return start;
}
NODE*  delete_beg(NODE* start)
{
    if(start == NULL)
    {
        printf("UNDERFLOW");
        return NULL;
    }
    else
    {
     node* temp =  start;
     start = start-> next;
     free(temp);


    }

    return start;
}

NODE * delete_end(NODE *start)
{

    NODE* curr=  start;
    NODE* save= NULL;
    if(start.next== NULL)
    {
        start = NULL;
        return start;
    }


    else{
    while(curr->next!= NULL)
    {
    save = curr;    
    curr = curr->next;
    }
    save.next= NULL;
    free(curr);
	
	return start;
    }


}


NODE * delete_loc(NODE *start,int loc)
{
    
	
	return start;
}
}

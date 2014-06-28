#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

/*INESET AT THE BEGINING*/
struct node *insert_a (struct node *l, int data))
{
    struct node *tmp = (struct node*)malloc(sizeof(struct node));
    tmp->data = data;
    tmp->next = l;
    return tmp;
}

/*INESET AT THE END*/
struct node *insert_z (struct node *l, int data))
{
    struct node *tmp = l;

    if(tmp == NULL)
    {
        tmp = insert_a(tmp, data);
        return tmp;
    }

    while(tmp->next != NULL)
        tmp = tmp->next;

    tmp->next = (struct node*)malloc(sizeof(struct node));
    tmp->next->data = data;
    tmp->next->next = NULL;

    return l;
}

/*DELETE NODE*/
struct node *deleteNode (struct node* s)
{
    if(s == NULL)
        return s;

    struct node* tmp;
    tmp = s->next;
    s->next = NULL;
    free(s);
    s = tmp;

    return s;
}

/*REVERSE ORDER NODE*/
struct node *reverseNode (struct node* s)
{
    struct node* first = NULL;
    if(s == NULL)
        return s;

    struct node* currNode = s;
    struct node* nextNode;

    while(currNode != NULL)
    {
        nextNode = currNode->next;
        currNode->next = first;
        first = currNode;
        currNode = nextNode;
    }
    return first;
}

/*AT THE END ADD THE SAME NODE*/
struct node *sameNode (struct node* s)
{
    struct node* first = NULL;
    if(s == NULL)
        return s;

    struct node* currNode = first;
    struct node* nextNode;
    struct node* currNodeF;
    struct node* nextNodeF;
    
    while(currNode->next != NULL)
    {
        nextNode = currNode->next;
        currNode->next = NULL;
        
        currNodeF = first;
        
        while(currNodeF != NULL)
               currNodeF = currNodeF->next;
               
        currNodeF = currNode; //first element
        currNodeF->next = currNode; //dubled element
        currNodeF->next->next = NULL;
        
        currNode = nextNode;
    }   
    currNode->next = first; // a tle nastane cikel??? al je oki
    
    return first;
}


/*DUPLICATE NODE*/
struct node *duplicateNode (struct node* s)
{
    struct node* first = s;
    if(s == NULL)
        return s;

    struct node* currNode = first;
    struct node* nextNode;
    
    while(currNode->next != NULL)
        currNode = currNode->next;
        
    currNode->next = first; // a tle nastane cikel??? al je oki
    
    return first;
}

/*DELETE EVERY SECOND NODE*/
struct node *duplicateNode (struct node* s)
{
    if(s == NULL)
        return s;

    struct node* currNode = s;
    struct node* nextNode;
    
    int i = 0;
    
    while(currNode->next != NULL)
    {
        if(i % 2 == 1)
        {
            nextNode = currNode->next;
            currNode->next = NULL;
            free(currNode);
            currNode = nextNode;
        }
        
        else
            currNode = currNode->next;
    }
    
    return s;
}


int main()
{
    //neki da se kej napiše pa to
    return 0;
}

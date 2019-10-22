#include <stdio.h>
#include "stdlib.h"
#include "string.h"
struct NODE
{
    char name[20];
    int age;
    struct NODE *next;
};
int main()
{
    struct NODE *head,*p,*q;
    q=head =(struct NODE *)malloc(32);
    strcpy(head->name,"Zhang");
    head-> age =19;
    p=(struct NODE *)malloc(32);
    strcpy(p->name,"Li");
    p->age=20;
    p->next=0;
    q->next =p;
    q=p;
    p=(struct NODE*)malloc(32);
    strcpy(p->name,"Li");
    p->age=20;
    p->next=p;
    q=p;
    p=head;
    
    while(p)
    {
        printf("name:%s age:%d\n",p->name,p->age);
    }
}

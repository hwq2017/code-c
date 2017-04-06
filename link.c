#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    int a;
    char *b;
}A;

typedef struct node{
    A data;
   struct node *prior;
   struct node *next;
}linknode,*linklist;


linklist link_create()
{
    linklist h;
    h = malloc(sizeof(linknode));
    if(h == NULL)
    {
        printf("malloc failed");
        return 0;
    }
    h->prior = h;
    h->next = h;
   return h; 
}



/*int link_heardin(linklist h, A value)
{
    linklist q;
    q = malloc(sizeof(linknode));
    if(q == NULL)
    {
        printf("malloc failed\n");
        return 0;
    }
    q->data = value;
    q->next = h;
    q->prior = h;
    h->next = q;
    h->prior = q;
    return 0;
}*/


int link_insert(linklist h, A value)
{
    linklist q;
    q = malloc(sizeof(linknode));
    if(q == NULL)
    {
        printf("malloc failed\n");
        return 0;
    }
    q->data = value;
    q->prior = h->prior;
    q->next = h;
    h->prior->next = q;
    h->prior = q;
    return 0;
}


int link_delete(linklist h, int k)
{
   linklist g;
   g = h ;
   for(int i = 0; i < k; i ++)
   {
       if(g == NULL)
       {
           return 1;
       }
           g = g->next;
   }
   g->prior->next = g->next;
   g->next->prior = g->prior;
   free(g);
   return 0;
}


void link_select(linklist h, int k)
{
    linklist e;
    e = h;
    for(int i = 0; i < k; i++)
    {
        e = e->next;
    }
    printf("%d %s\n", e->data.a, e->data.b);
}



void link_show(linklist h)
{
    linklist f;
    f = h->next;
    while(f != h)
    {
        printf("%d %s\n", f->data.a, f->data.b);
        f = f->next;  
    }
}


int main(int argc, const char *argv[])
{
   linklist l = NULL;
   if((l = link_create()) == NULL)
   {
       printf("error\n");
   }
   A s = {12,"nihao"}, t = {13,"hi"};
   link_insert(l,s);
   link_insert(l,t);
   link_show(l);
   link_delete(l, 2);
   printf("***********\n");
   link_show(l);
  // link_select(l, 2);
    return 0;
}

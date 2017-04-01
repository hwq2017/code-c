#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct BOOK{
    char title[60];
    int book_id;
};
typedef struct BOOK datatype;


typedef struct node{
    datatype data;
    struct node * next;
}linknode,*linklist;


linklist link_create()
{
    linklist p;
    p = malloc(sizeof(linknode));
    if(p == NULL)
    {
        printf("malloc failed\n");
        return 0;
    }
    p->next = NULL;
    return p;
}



int link_headerin(linklist p,datatype value)
{
    linklist q;
    q = malloc(sizeof(linknode));
    if(q == NULL)
    {
        printf("malloc failed\n");
        return 0;
    }
    q->data = value;
    q->next = NULL;
    q->next = p->next;
    p->next = q;
    return 0;
}

int link_delete(linklist p)
{
   linklist a;
   a = p->next;
   p->next = p->next->next;
   free(a);
    return 0;
}


void link_show(linklist p)
{
    while(p != NULL)
    {
        printf("%d %s\n", p->data.book_id, p->data.title);
        p = p->next;
    }
}




int main(int argc, const char *argv[])
{
   linklist h = NULL;
   if((h = link_create()) == NULL)
   {
       printf("error\n");
   }
   datatype b = {"nihao",123}, c = {"hello", 456};
   link_headerin(h,b);
   link_headerin(h,c);
   link_show(h);
//   link_delete(h);

    return 0;
}


#include<math.h>
#include<stdio.h>
#include<stdlib.h>
struct NODE
{
int key;
int degree;
struct NODE*left_sibling;
struct NODE*right_sibling;
struct NODE*parent;
struct NODE*child;
int mark;
int visited;
}NODE;
struct FIB-HEAP
{
int n
struct NODE *min;
int phi;
int degree;
}
FIB_HEAP;
struct FIB-HEAP*make_fib_heap();
void insertion(struct FIB_HEAP*H,struct NODE* new,interval);
struct NODE * finf-min-node(struct FIB_HEAP* H);
struct FIB_HEAP*make_fib_heap()
{
struct FIB_HEAP*H=(struct FIB_HEAP*)malloc(sizeof(FIB_HEAP));
H->n=0;
H->min=NULL;
H->phi=0;
H->degree=0;
return H;
}
void print-heap(struct NODE*n);
{
struct NODE* x;
for (x=n;;x=x->right_sibling)
{
if(x->child=NULL)
{
printf("node with no child(%d)\n",x->key);
}
else
{
printf("NODE(%d)with child(%d)\n",x->key,x->child->key);
print_heap(x->child);
}
if(x->right_sibling==n)
{
break;
}
}
}
void insertion(struct FIB_HEAP*H
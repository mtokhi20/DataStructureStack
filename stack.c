#include "stack.h"
void CreateStack(Stack  *ss){

   ss->top=0;
}
void push(StackEntry E , Stack  *ps)
{
 ps ->entry[ps->top++]=E;
}
void pop(StackEntry *pe , Stack  *ps){

*pe=ps->entry[--ps->top];
}
char StackEmpty ( Stack  *ps){
if (ps->top==0)
    return 1;
else
    return 0;
}
char StackFull(Stack *ps){
 if (ps->top==MAXSTACK-1)
    return 0;
 else
    return 1;
}
void StackTop(StackEntry *pe , Stack *ps){
  *pe=ps->entry[ps->top-1];
}
int StackSize(Stack *ps){
 return ps->top;
}
void ClearStack(Stack *ps){
ps->top=0;
}

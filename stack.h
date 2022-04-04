
#define MAXSTACK 100
#define StackEntry int
typedef struct stack_1 {
    int top ;
    StackEntry entry [MAXSTACK];

}Stack;
void push (StackEntry,Stack *);
void pop  (StackEntry * , Stack *);
char StackEmpty (Stack *);
char StackFull(Stack *);
void CreateStack(Stack*);
void StackTop (StackEntry * , Stack*);
int StackSize(Stack *);
void ClearStack(Stack *);

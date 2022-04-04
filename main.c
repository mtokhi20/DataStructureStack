#include <stdio.h>
#include <stdlib.h>
#include "stack.h"
int main(void)
{
   Stack s;
   CreateStack(&s);
  // if (StackFull(&s)=='0')
   //{
      push(5,&s);
      push(6,&s);
      push(10,&s);
      push(15,&s);

   //}
   printf("stack elment %d" , s.entry[s.top-3]);

    return 0;
}

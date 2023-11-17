#include "monty.h"
/**
* montyBus - func runs opcode
* @a: param head of linked list.
* @b: param - line position.
*/
void montyBus(int a, int b)
{
    int tmp;

    tmp = a;
    a = b;
    b = tmp;
}

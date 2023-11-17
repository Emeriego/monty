#include "monty.h"
/***
* montyExch - Does absolutely nothing
* @a: param - integer 1.
* @b: param - integer 2.
*/
void montyExch(int a, int b)
{
    int tmp;

    if (a > b)
    {
        b = 0;
    }
    tmp = a;
    a = b;
    b = tmp;
}

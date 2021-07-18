#include <stdio.h>
void main() int (*(x()))[2];
typedef int (*(ptr)())[2] ptrfoo;
int main()
{
    ptrfoo ptr1;
    ptr1 = x;
    ptr1();
    return 0;
}
int (*(x()))[2]
{
    int(*ary)[2] = malloc(sizeof(*ary));
    return &ary;
}

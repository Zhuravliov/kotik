#include"stack2.h"

int main()
{
    show();
    push(4);
    push(8);
    push(10);
    push(12);
    printf("%2d\n", push(14));
    printf("%2d\n", push(16));
    show();
    pop();
    show();
    printf("%d\t%d", is_empty(), is_full());
    return 0;
}

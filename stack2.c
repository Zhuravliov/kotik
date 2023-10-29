#include"stack2.h"
#define MAX 5
static int stack[MAX];

int pw=0, pr=0, count=0;

void show(void)
{
    for(int i=pr%MAX; i<(pw-1)%MAX; i=(i+1)%MAX)
    {
        printf("%d\t", stack[i]);
    }
    printf("%d", stack[pw-1]);
    printf("\n");
}

int push(int n)
{
    if(pw-pr==MAX)
    {
        return -1;
    }
    else
    {
        stack[pw]=n;
        pw++;
        return 0;
    }
}

int pop(void)
{
    if(pr-pw==MAX)
    {
        return -1;
    }
    else
    {
        stack[pr]='\0';
        pr++;
        return 0;
    }
}

bool is_empty(void)
{
    if(pr-pw==MAX)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

bool is_full(void)
{
    if(pw-pr==MAX)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

#include <iostream>
#include <stdio.h>

int x = 0;

int fun(int n);
int staticIntFun(int n);

int main()
{
    printf("\nNormal Recursive function\n");
    int r;
    r = fun(5);
    printf("%d",r);
    
    printf("\nStatic Variable Func\n\n");
    int z;
    z = staticIntFun(5);
    printf("%d", z);

    return 0;

}

int fun(int n)
{
    if (n > 0)
    {
        return fun(n - 1) + n;
    }
    return 0;
}

int staticIntFun(int n)
{

    if (n > 0)
    {
        x++;
        return staticIntFun(n - 1) + x;
    }
    return 0;
}

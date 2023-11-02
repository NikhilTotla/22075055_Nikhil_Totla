#include<stdio.h>

int *func(int *p)
{
    int a = 5;
    return (&a);
}
// int *func(int *p1){
//     int a = 5;
//     p1 = &a;
//     return p1;
// }

    int main()
    {
        int *p = NULL;
        int *q = func(p);
        printf("%d",*q);
    }

#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int a = 0;
    int b = 0;
    scanf("%x %o", &a, &b);
    int sum = a + b;
    printf("%d\n", sum);

    return 0;
}
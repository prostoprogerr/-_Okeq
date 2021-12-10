#include <stdio.h>
int stepen(int n, int i)
{
return n ? n * stepen(n, i - 1) : 1;
}

int main()
{
    int h, j;
    scanf("%d", &h);
    scanf("%d", &j);
    printf("%d", stepen(h, j));
    return 0;
}

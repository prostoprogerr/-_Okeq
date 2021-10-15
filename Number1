#include <stdio.h>
int main()
{
    int a, b, as = 0, bs = 0;
    printf("Введите a: ");
   
    scanf("%d", &a);
   
    printf("Введите b: ");
   
    scanf("%d", &b);
   
    while(a > 0)
    {
        int i = 10;
        as += a % i;
        a = a / i;
        i *= 10;
    }
    
    while(b > 0)
    {
        int j = 10;
        bs += b % j;
        b = b / j;
        j *= 10;
    }

    if(as > bs) 
    {
        printf("%d", as);
    }
    else
    {
        if(as == bs) 
        
        {
            printf("%s", "Сумма цифр = b");
        }
        
        else
        
        if(as < bs) 
        {
            int u = bs * b;
            printf("%d", u);
        }
    }

    return 0;
}

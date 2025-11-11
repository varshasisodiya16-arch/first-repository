#include <stdio.h>
int main()
{
    int bill, n;
    printf("enter unit n");
    scanf("%d ", &n);
    if (n >= 0 && n <= 100)
    {
        bill = n * 2;
    }
    else if (n > 100 && n <= 200)
    {
        bill = ((n - 100) * 3) + 100 * 2;
    }
    else
    {
        bill = ((n - 200) * 4) + 100 * 2 + 100 * 3;
    }
    printf("%d ", bill);
    return 0;
}
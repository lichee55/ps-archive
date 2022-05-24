#include <ios>

int main()
{
    int n;
    scanf("%d", &n);

    int a, b;
    while (n--)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
}
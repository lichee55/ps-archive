#include <ios>

int main()
{
    int n;
    scanf("%d", &n);
    if (n % 4 == 0 && n % 100 != 0 || n % 400 == 0)
    {
        printf("%d", true);
    }
    else
    {
        printf("%d", false);
    }

    return 0;
}
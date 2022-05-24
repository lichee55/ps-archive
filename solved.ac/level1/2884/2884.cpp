#include <ios>

int main()
{
    int time, minute;

    scanf("%d %d", &time, &minute);

    int total = (time * 60) + minute;
    total -= 45;
    if (total < 0)
    {
        total += 1440;
    }
    time = total / 60;
    minute = total % 60;

    printf("%d %d", time, minute);
}
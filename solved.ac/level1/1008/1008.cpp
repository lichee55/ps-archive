#include <iostream>

using namespace std;

int main()
{
    double a, b;
    scanf("%lf %lf", &a, &b);
    double c = a / b;
    printf("%.20lf\n", c);
}
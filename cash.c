#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for Change
    int change;
    do
    {
        change = get_int("Change owed: ");
    }
    while (change < 0);
    {
        // CalcULATIONS for 25 Cents
        int q1 = (change / 25);
        int r1 = (change - q1 * 25);

        // Calculation for 10 Cents
        int q2 = (r1 / 10);
        int r2 = (r1 - q2 * 10);

        // Calculation for 5 cents
        int q3 = (r2 / 5);

        // Calculation for 1 cents
        int r3 = (r2 - q3 * 5);

        printf("%d\n", q1 + q2 + q3 + r3);
    }
}

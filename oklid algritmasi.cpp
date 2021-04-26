#include <stdio.h>
#include <stdlib.h>
int main (void)

{

    int m, n; /* given numbers */

    clrscr();

    printf("Enter-two integer numbers: ");

    scanf ("%d %d", &m, &n);

    while (n > 0)

    {

        int r = m % n;

        m = n;

        n = r;

    }

    printf ("GCD = %d \n",m);

    getch();

}

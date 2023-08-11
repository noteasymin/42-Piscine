#include <stdio.h>
#include <time.h>

void rush(int x, int y);

int     main(void)
{
        clock_t start, end;
        double result;

        start = clock();
//----------------------------------------

        rush(30, 30);

//----------------------------------------
        end = clock();

        result = (double)(end - start);
        printf("%f\n", result);

        return (0);
}

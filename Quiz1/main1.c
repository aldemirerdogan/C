#include <stdio.h>

int main(void)
{
    int i = 10;
    float j = 15.;
    double k = 20.;

    printf( "Output 1: %d\n", i++ );
    printf( "Output 2: %lf\n", ++k );
    printf( "Output 3: %lf\n",  i / j * k + (1 / (double)j + 1) );

    i += 1;

    printf("Output 4: %d\n", i++  + ++i);
    printf("Output 5: %d\n",  i % 5 / 2 + 3 * 10);
    printf("Output 6: %lf\n", (double)(j / (int)k));
    return 0;
}

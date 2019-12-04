#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int n, m;
    float p, q;
    scanf("%d %d", &n, &m);
    scanf("%f %f", &p, &q);

    printf("%d %d\r\n%.1f %.1f", n + m, n - m, p + q, p - q);
    return 0;
}

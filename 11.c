#include <stdio.h>

int main()
{
    int H, M;
    printf(" enter hour and minute:");
    scanf("%d%d", &H, &M);

    printf("%c%d%c%d%c", '"', H, ':', M, '"');

    printf("\n output is : %c%d%c%s%c%s%c%d%c%s%c", '"', H, ' ', "hour", ' ', "and", ' ', M, ' ', "minute", '"');

    return 0;
}
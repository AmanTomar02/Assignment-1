
/*
User Input date format – “DD/MM/YYYY” (27/11/2022)
Output format –
“Day – DD , Month – MM , Year – YYYY” (Day – 27 ,Month – 07 , Year – 2022)
*/

#include <stdio.h>

int main()
{

    int D, M, Y;

    printf("enter DOB");
    scanf("%d%d%d", &D, &M, &Y);
    printf("user input is %C%d%c%d%c%d%c\n", '(', D, '/', M, '/', Y, ')');

    printf(" \nthe output is %c%s%c%d%c%s%c%d%c%s%c%d%c\n", '(', "day", '-', D, ',', "month", '-', M, ',', "Year", '-', Y, ')');

    return 0;
}
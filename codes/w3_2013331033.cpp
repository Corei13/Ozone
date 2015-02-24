/*
ID: nafisan2
PROG: friday
LANG: C++
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
    long day(13);
    int day_name(0);
    int week[7]= {0,0,0,0,0,0,0};
    int month[12]= {31,0,31,30,31,30,31,31,30,31,30,31};
    int n;

    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);

    scanf("%d", &n);

    for(int i=1900; i<1900+n; i++)
    {
        if ((i%4==0) && (i%100!=0) || (i%400==0))
            month[1]=29;

        else
            month[1]=28;

        for(int j=0; j<12; j++)
        {
            day_name=(day)%7;
            week[day_name]=week[day_name]+1;
            day=day+month[j];
        }
    }
    printf("%d", week[6]);

    for(int i=0; i<=5; i++)
        printf(" %d", week[i]);
        printf("\n");

    return 0;
}

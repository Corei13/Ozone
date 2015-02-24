/*
ID: nafisan2
PROG: ride
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
    char c[10], g[10];
    int m1, m2, i;

    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);

    gets(c);
    gets(g);

    string abc = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    m1=1;
    for(i=0; i<strlen(c); i++)
        m1 *= (abc.find(c[i])+1);

    m2=1;
    for(i=0; i<strlen(g); i++)
        m2 *= (abc.find(g[i])+1);

        if((m1%47)==(m2%47))
            printf("GO\n");

        else printf("STAY\n");
       //  freopen("ride.out", "w", stdout);

        return 0;
}

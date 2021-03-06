/*
 ID: mahirha1
 LANG: C++
 TASK: ride
*/
#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    long long unsigned i, j, k, n, m, p, t;
    char ch[21], c[22];

    while(gets(ch))
    {
        n=m=1;
        gets(c);
        p=strlen(ch);
        t=strlen(c);

        for( i=0; i<p; i++)
        {
            if(ch[i]>='A' && ch[i]<='Z')
            {
                n*=(ch[i]-64);
            }
        }
        for( j=0; j<t; j++)
        {
            if(c[j]>='A' && c[j]<='Z')
            {
                m*=(c[j]-64);
            }
        }
        n=n%47;
        m=m%47;
        if(n==m)
        {
            printf("GO\n");
        }
        else
        {
            printf("STAY\n");
        }
    }
    return 0;
}

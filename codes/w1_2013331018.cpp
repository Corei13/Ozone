/*
ID: saif_le1
PROG: ride
LANG: C++
*/
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
#include <iostream>
#include <fstream>
using namespace std;
int main ()
{
    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);

    char ch1[10000], ch2[10000];
    int len1, len2,i,sum1=1, sum2=1;
    gets(ch1);
    gets(ch2);
    len1=strlen(ch1);
    len2=strlen(ch2);
    for(i=0;i<len1;i++)
    {
        sum1*=(ch1[i]-64);
    }
    sum1=sum1%47;
    for(i=0;i<len2;i++)
    {
        sum2*=(ch2[i]-64);
    }
    sum2=sum2%47;
    if(sum1==sum2)
    {
        printf("GO\n");
    }
    else printf("STAY\n");
    return 0;
}
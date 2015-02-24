/*
 ID:  tta.mou1
PROG:  ride
LANG:  C++
*/

#include<cstdio>
#include<cstring>
int main()
{
    int i, m=1, n=1;
    char a[30], b[30];

    freopen("ride.in","r",stdin);
    freopen("ride.out","w",stdout);
    scanf("%s%s", a, b);
    for(i=0; i<strlen(a); i++) m *= (a[i] - 64);
    for(i=0; i<strlen(b); i++) n *= (b[i] - 64);

    m%=47;
    n%=47;
    if(m==n) printf("GO\n");
    else printf("STAY\n");
    return 0;
}

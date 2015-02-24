/*
ID: mridul11
PROG: ride
LANG: C++
*/

#include<cstdio>
#include<cstring>

int main()
{
    char ch[10], s[10];
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
    while(scanf("%s\n%s", ch, s)==2)
    {
        int i, j;
        long long int pro1=1, pro2=1;
        for(i=0; i<strlen(ch); i++) pro1*=ch[i]-64;
        for(j=0; j<strlen(s); j++) pro2*=s[j]-64;
        if(pro1%47==pro2%47) printf("GO\n");
        else printf("STAY\n");
    }

    return 0;
}


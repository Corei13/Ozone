/*
ID: rafikfa1
PROG: ride
LANG: C++
*/
#include <cstdio>
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <new>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#define MAX3(a, b, c) MAX(a , MAX(b,c))
#define MIN3(a, b, c) MIN(a , MIN(b,c))
#define sf scanf
#define ssf sscanf
#define pb push_back
#define PPP system("pause");
#define ppp system("pause");
#define ok cout << "OK" <<endl;
#define pf printf
#define CLR(a) memset(a, 0, sizeof(a))
#define PI 2*acos(0)
using namespace std;

int main()
{
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
    int i, j, l, c1=1, c2=1;
    char a[10],  b[10];
    gets(a);
    gets(b);
    l = strlen(a);
    for(i=0; i<l; i++)
    {
        c1*= (a[i]-'A'+1);
        c1%=47;
    }
    l = strlen(b);
    for(i=0; i<l; i++)
    {
        c2*= (b[i]-'A'+1);
        c2%=47;
    }
    if(c1==c2) pf("GO\n");
    else pf("STAY\n");
}

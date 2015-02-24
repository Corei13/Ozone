/*
ID: rafikfa1
PROG: friday
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

int FACT(int m, int y)
{
    if(m== 0 || m==1 || m== 3 || m==5 || m==7 || m==8 || m==10) return 3;
    if(m==2)
    {
        if((y%4==0 && y%100!=0) || y%400==0) return 1;
        return 0;
    }
    return 2;
}

int main()
{
    freopen("friday.in", "r", stdin);
    freopen("friday.out", "w", stdout);
    int ar[8], n, year=1900, month = 1, i, j, k, factor = 0, cow = 0;
    sf("%d", &n);
    year+=n;
    //cout << year;
    CLR(ar);
    cow =-3;
    j=1;
    for(i=1900; i<year; i++)
    {
        for(j=0; j<12; j++)
        {
            factor = FACT(j, i);
            cow = (cow+factor)%7;
            //cout<< i << " " << j << " " << cow << endl;
            ar[cow]++;
        }
    }
    pf("%d", ar[0]);
    for(i=1; i<7; i++) pf(" %d", ar[i]);
    pf("\n");
    return 0;
}


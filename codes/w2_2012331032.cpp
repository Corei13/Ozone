/*
ID: rafikfa1
PROG: gift1
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
    freopen("gift1.in", "r", stdin);
    freopen("gift1.out", "w", stdout);
    char name[15][15], temp[15], rec[15];
    int n, i, bal[15], k, give, j, l, rem;
    sf("%d ", &n);
    for(i=0; i<n; i++)
        {
            gets(name[i]);
            bal[i] = 0;
        }
    for(i=0; i<n; i++)
    {
        gets(temp);
        sf("%d %d ",&give, &k);
        if(give==0) continue;
        rem = give%k;
        for(j=0; j<n; j++)
            if(strcmp(name[j], temp)==0)
            {
                bal[j] = bal[j] - (give-rem);
                break;
            }
        give/=k;
        //cout << k << endl;
        for(j=0; j<k; j++)
        {
            gets(rec);
            //cout << "***"  << rec << endl;
            for(l=0; l<n; l++)
            {
                if(strcmp(name[l], rec)==0)
                    {
                        bal[l] += give;
                        break;
                    }
            }
        }
    }
    for(i=0; i<n; i++)
        cout << name[i] << " " << bal[i] << endl;
    return 0;
}

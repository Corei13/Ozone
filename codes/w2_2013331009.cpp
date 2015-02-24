/*
 ID:  tta.mou1
PROG:  gift1
LANG:  C++
*/

#include <cstdio>
#include <cstring>
#include <string>
#include <map>
#include<iostream>
using namespace std;

int main()
{
    freopen("gift1.in","r",stdin);
    freopen("gift1.out","w",stdout);

    int n, i, j, m, a, b, c, l, tag = 0;
    string s[100], p, q;
    map<string, int> mp;

    while(scanf("%d", &l) == 1)
    {
        if(tag) printf("\n");
        tag = 1;

        for(i=1; i<=l; i++)
        {
            cin>>s[i];
            mp[s[i]] = 0;
        }

        for(i=1; i<=l; i++)
        {
            cin>>p;
            cin>>m>>n;

            if(n!=0)
            {
               a = m/n;
               b = a*n;

               for(j=1; j<=n; j++)
               {
                   cin>>q;
                   mp[q] += a;
               }
               mp[p] -= b;

            }
        }
        for(i=1; i<=l; i++) cout<<s[i]<<" "<<mp[s[i]]<<endl;

    }
    return 0;
}


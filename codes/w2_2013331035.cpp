/*
ID:anwarho2
LANG:C++
PROG:gift1
*/
#include <cstdio>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <iterator>
#include <set>
#include <stack>
#include <queue>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <string>
#include <cstdlib>
#include <cctype>
#include <fstream>
#include <numeric>
#include <list>
#include <iostream>
using namespace std;

#define pf printf
#define sc scanf
#define LL long long
#define pb push_back

int main()
{
        freopen("gift1.in","r",stdin);
        freopen("gift1.out","w",stdout);
        int i,j,x,y,z,ans,np,person,tk;
        vector< string >name;
        string s;
        sc("%d\n",&np);
        for(i=0;i<np;i++)
        {
                cin>>s;
                name.pb(s);
        }

        map<string,int>give;
        map<string,int>get;
        string str;

        for(i=1;i<=np;i++)
        {
                cin>>s;
                sc("%d%d",&tk,&person);
                if(tk==0 || person==0)continue;
                x=tk/person;//x=money per head
                y=tk-(x*person);//y=remain money in givers account
                z=tk-y;//total money given

                give[s]+=z;

                for(j=1;j<=person;j++)
                {
                        cin>>str;
                        get[str]+=x;
                }
        }

        for(i=0;i<np;i++)
        {
                ans=get[name[i]]-give[name[i]];
                cout<<name[i]<<" "<<ans<<endl;
        }

        return 0;
}


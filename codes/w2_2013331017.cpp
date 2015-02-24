/*
ID: arnab.a1
LANG: C++
TASK: gift1
*/
#include<cstdio>
#include<sstream>
#include<cstdlib>
#include<cctype>
#include<cmath>
#include<algorithm>
#include<set>
#include<queue>
#include<stack>
#include<list>
#include<iostream>
#include<fstream>
#include<numeric>
#include<string>
#include<vector>
#include<cstring>
#include<map>
#include<iterator>
using namespace std;

int main()
{
    freopen("gift1.in","r",stdin);
    freopen("gift1.out","w",stdout);
    int n,i,j,k;
    string s;
    while(scanf("%d\n",&n)==1){
        vector<string>name;
        for(i=0;i<n;i++){
            cin>>s;
            name.push_back(s);
        }
        int give[n],receive[n];
        for(i=0;i<n;i++){
            give[i]=0;
            receive[i]=0;
        }
        /*for(i=0;i<n;i++){
            cout<<name[i]<<" ";
            printf("%d\n",receive[i]-give[i]);
        }*/
        int tk,p,k,v;
        for(i=0;i<n;i++){
            cin>>s;
            for(j=0;j<n;j++) if(name[j]==s) break;
            scanf(" %d%d",&tk,&p);
            if(p==0) continue;
            for(k=tk;;k--){
                if(k%p==0) break;
            }
            give[j]+=k;
            v=k/p;
            //cout<<name[j]<<" ";
            //printf("%d %d %d\n",v,k,tk);
            for(k=0;k<p;k++){
                cin>>s;
                for(j=0;j<n;j++) if(name[j]==s) break;
                receive[j]+=v;
            }
        }
        for(i=0;i<n;i++){
            cout<<name[i]<<" ";
            printf("%d\n",receive[i]-give[i]);
        }
    }
	return 0;
}


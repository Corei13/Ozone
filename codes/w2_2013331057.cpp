/*
ID: gautam.4
LANG: C++
PROG: gift1
*/
#include <cstdio>
#include <map>
#include <vector>
#include <string>
#include <iostream>
using namespace std;

int main()
{
    freopen("gift1.in","r",stdin);
    freopen("gift1.out","w",stdout);
    int np,money,n,k,p;
    string name,a;
    vector<string>v;
    map<string,int>fin;
    map<string,int>init;
    scanf("%d",&np);
    k=np;
    while(k--)
    {
        cin>>name;
        v.push_back(name);
    }
    while(np--)
    {
        cin>>name;
        scanf("%d%d",&money,&n);
        init[name]=money;
        if(n!=0)
        {
            k=n;
            p=money/n;
            while(k--)
            {
                cin>>a;
                fin[a]+=p;
            }
            fin[name]+=money-(p*n);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" "<<fin[v[i]]-init[v[i]]<<endl;
    }
    return 0;
}


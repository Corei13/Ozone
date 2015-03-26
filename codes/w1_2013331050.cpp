/*
ID: hmdjaki1
PROG: ride
LANG: C++
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    int i,j,k,l,p,ans=1,sum=1;
    char ar1[10],ar2[10];
    fin>>ar1>>ar2;
    int n=strlen(ar1);
    int n1=strlen(ar2);
    for(i=0;i<n;i++)
    {
        ans*=(ar1[i]-64);
    }
    for(i=0;i<n1;i++)
    {
        sum*=(ar2[i]-64);
    }
    // printf("%d %d",ans,sum);
    ans=ans%47;
    sum=sum%47;
    //printf("%d %d",ans,sum);
    if(ans==sum)
        fout<<"GO"<<endl;
    else
        fout<<"STAY"<<endl;
        return 0;
}


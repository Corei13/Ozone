/*
ID: hmdjaki1
PROG: friday
LANG: C++
*/
#include <bits/stdc++.h>
#include <cstdio>
#include <fstream>
#include <sstream>
#include <iostream>
using namespace std;
int ar1[15];
int main()
{
    ofstream fout("friday.out");
    ifstream fin("friday.in");
    int i,j,k,l,m,n,ans,sum,mod;
    fin>>n;
    sum=13;
    ar1[6]=1;
    mod=13%7;
    for(j=1900;j<=1900+n-1;j++)
    {
        for(i=1;i<=12;i++)
        {
            if(j==1900+n-1&&i==12) break;
            if(i==1||i==3||i==5||i==7||i==8||i==10||i==12)
            {
                mod=(mod+31)%7;
                ar1[mod]++;
            }
            else if(i==4||i==6||i==9||i==11)
            {
                mod=(mod+30)%7;
                ar1[mod]++;
            }
            else if(i==2)
            {
                if((j%4==0&&j%100!=0)||j%400==0)
                    sum=29;
                else sum=28;
                mod=(mod+sum)%7;
                ar1[mod]++;
            }
        }
    }
    for(i=6;i<=12;i++)
    {
        fout<<ar1[i%7];
        if(i!=12) fout<<" ";
    }
    fout<<endl;
    return 0;
}


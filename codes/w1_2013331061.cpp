/*
ID: imticor1
PROG: ride
LANG: C++

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{

    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    char comet[500];
    char group[500];
    char alpha[26]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    int value[26]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26};
    int n1,n2,i,j,k=1,l=1,temp;
    fin>>comet>>group;
    n1=strlen(comet);
    n2=strlen(group);
    for(i=0; i<n1; i++)
    {
        for(j=0; j<27; j++)
        {
            if(comet[i]==alpha[j])
            {
                k=value[j]*k;
            }
        }
    }
    for(i=0; i<n2; i++)
    {
        for(j=0; j<27; j++)
        {
            if(group[i]==alpha[j])
            {
                l=value[j]*l;
            }
        }
    }
    if (k%47==l%47)
    {
        fout<<"GO\n";
    }
    else
    {
        fout<<"STAY\n";
    }
    return 0;
}

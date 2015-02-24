/*
ID: imticor1
PROG: gift1
LANG: C++
*/
#include<bits/stdc++.h>
#define pi 2*acos(0.0)
using namespace std;

char names[50][50];
int NP;

int Find(char name[])
{
    for(int i=0; i<NP; i++)
    {
        if(strcmp(name,names[i])==0)
            return i;
    }
    return -1;
}

int main()
{

    ofstream fout ("gift1.out");
    ifstream fin ("gift1.in");
    int i,j,moneyBeGiven,nPeople,giftAmount,give[50],get[50],remainder;
    char  name[50];
    while(fin>>NP)
{
    for(i=0; i<NP; i++)
        fin>>names[i];

    memset(get,0,sizeof(get));
    memset(give,0,sizeof(give));

    for(i=0; i<NP; i++)
    {
        fin>>name;
        int pos = Find(name);
        fin>>moneyBeGiven>>nPeople;
        give[pos] = moneyBeGiven;
        if(nPeople!=0 && moneyBeGiven!=0)
        {
            giftAmount = moneyBeGiven/nPeople;
            remainder = moneyBeGiven%nPeople;
            get[pos]+=remainder;
            for(j=0; j<nPeople; j++)
            {
                fin>>name;
                pos=Find(name);
                get[pos]+=giftAmount;
            }

        }
        else
        {
            for(int k=0; k<nPeople; k++)
                fin>>name;
        }
    }
    for(i=0; i<NP; i++)
        fout<<names[i]<<" "<<(get[i]-give[i])<<endl;
}
    return 0;
}

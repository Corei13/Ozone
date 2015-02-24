/*
ID: talat.21
PROG: ride
LANG: C++
*/

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string name,ufo;
    int num,unum;
    while(fin>>name>>ufo)
    {
        num=unum=1;
        for(int i=0;i<name.size();i++)
        {
            num*=name[i]-'A'+1;
        }
        for(int j=0;j<ufo.size();j++)
        {
            unum*=ufo[j]-'A'+1;
        }
        if(num%47==unum%47)
        {
            fout <<"GO"<< endl;
        }
        else fout<<"STAY"<<endl;
    }
    return 0;
}


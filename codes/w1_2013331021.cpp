/*
ID: sagor
PROG: ride
LANG: C++
*/
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main()
{
    ofstream fout ("ride.out");
    ifstream fin ("ride.in");
    string name,comet;
    int n_int,c_int;
    fin>>name>>comet;

    n_int=1;
    for(int i=0; i<name.size(); i++)
    {
        n_int=n_int*(name[i]-'a'+33);
    }
    c_int=1;
    for(int i=0; i<comet.size(); i++)
    {
        c_int=c_int*(comet[i]-'a'+33);
    }
    if(n_int%47==c_int%47)
        fout<<"GO"<<endl;
    else
        fout<<"STAY"<<endl;



    return 0;
}

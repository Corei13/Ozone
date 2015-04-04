/*
ID: algocer1
PROG: beads
LANG: C++
*/


#include <iostream>
#include <cstdio>
#include <cstring>
#include <string>
#include <fstream>

using namespace std;

int main()
{
    ofstream fout ("beads.out");
    ifstream fin ("beads.in");

    string a, b, c;
    int k, i, j, s = 0, t, u = 0, tr = 0, r = 0, w = 0, m;
    fin >> m;
    fin >> a;
    b = a;
    a = a + b;
    int old_cnt = 0;
    int new_cnt = 0;
    int old_cnt1 = 0;
    int new_cnt1 = 0;
    int new_cnt2 = 0;


    for(i = 0; i < a.size() - 1; i++)
    {

        if(a[i] == 'b' && a[i + 1] == 'r')
        {
            for(int j = i; a[j] != 'r'; j-- )
            {
                old_cnt++;
                if(j == 0) break;
            }
            for(int j = i + 1; a[j] != 'b'; j++ )
            {
                old_cnt++;
                if(j == 2 * m - 1) break;
            }
        }
        else if(a[i] == 'r' && a[i + 1] == 'b')
        {
            for(int j = i; a[j] != 'b'; j-- )
            {
                old_cnt++;
                if(j == 0) break;
            }
            for(int j = i + 1; a[j] != 'r'; j++ )
            {
                old_cnt++;
                if(j == 2 * m - 1) break;
            }
        }
        else if(a[i] == 'w' && a[i + 1] == 'b')
        {
            for(int j = i; a[j] != 'b'; j-- )
            {
                old_cnt++;
                if(j == 0) break;
            }
            for(int j = i + 1; a[j] != 'r'; j++ )
            {
                old_cnt++;
                if(j == 2 * m - 1) break;
            }
        }
        else if(a[i] == 'w' && a[i + 1] == 'r')
        {
            for(int j = i; a[j] != 'r'; j-- )
            {
                old_cnt++;
                if(j == 0) break;
            }
            for(int j = i + 1; a[j] != 'b'; j++ )
            {
                old_cnt++;
                if(j == 2 * m - 1) break;
            }
        }
        else if(a[i] == 'b' && a[i + 1] == 'w')
        {
            for(int j = i; a[j] != 'r'; j-- )
            {
                old_cnt++;
                if(j == 0) break;
            }
            for(int j = i + 1; a[j] != 'b'; j++ )
            {
                old_cnt++;
                if(j == 2 * m - 1) break;
            }
        }
        else if(a[i] == 'r' && a[i + 1] == 'w')
        {
            for(int j = i; a[j] != 'b'; j-- )
            {
                old_cnt++;
                if(j == 0) break;
            }
            for(int j = i + 1; a[j] != 'r'; j++ )
            {
                old_cnt++;
                if(j == 2 * m - 1) break;
            }
        }
        if(old_cnt > new_cnt && old_cnt <= m) new_cnt = old_cnt;
        old_cnt = 0;
        //cout << new_cnt << endl;
    }
    //cout << new_cnt << endl;

    c = a;

    if(c[0] == 'r')
    {
        for(int i = 0; i < c.size(); i++)
        {
            if(c[i] == 'w') c[i] = 'r';
        }
    }
    else if(c[0] == 'b')
    {
        for(int i = 0; i < c.size(); i++)
        {
            if(c[i] == 'w') c[i] = 'b';
        }
    }
    else if(c[0] == 'w')
    {
        for(int i = 0; i < a.size(); i++)
        {
            if(c[i] == 'w') continue;
            else if(c[i] == 'b') u = 1;
            else if(c[i] == 'r') u = 2;
        }
    }
    if(u == 1)
    {
        for(int i = 0; i < c.size(); i++)
        {
            if(c[i] == 'w') c[i] = 'b';
        }
    }
    if(u == 2)
    {
        for(int i = 0; i < c.size(); i++)
        {
            if(c[i] == 'w') c[i] = 'r';
        }
    }
    for(int i = 0 ; i < a.size() - 1; i++)
    {
        if(c[i] != c[i + 1]) tr = 1;
    }
    if(tr == 0) new_cnt = m;
    //if(new_cnt2 > new_cnt) new_cnt = new_cnt2;

    fout << new_cnt << endl;


    return 0;
}



/*
ID: rizvisu1
PROG: ride
LANG: C++
*/

#include <stdio.h>
#include <string.h>

int main()
{
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w", stdout);
    char comet[10],group[10];
    while(scanf("%s\n%s", &comet, &group)==2)
    {
        int c,g,i,j,product=1,productg=1;
        c=strlen(comet);
        g=strlen(group);
        for(i=0; i<c; i++)
        {
            if(comet[i]=='A')
                product=product*1;
            if(comet[i]=='B')
                product=product*2;
            if(comet[i]=='C')
                product=product*3;
            if(comet[i]=='D')
                product=product*4;
            if(comet[i]=='E')
                product=product*5;
            if(comet[i]=='F')
                product=product*6;
            if(comet[i]=='G')
                product=product*7;
            if(comet[i]=='H')
                product=product*8;
            if(comet[i]=='I')
                product=product*9;
            if(comet[i]=='J')
                product=product*10;
            if(comet[i]=='K')
                product=product*11;
            if(comet[i]=='L')
                product=product*12;
            if(comet[i]=='M')
                product=product*13;
            if(comet[i]=='N')
                product=product*14;
            if(comet[i]=='O')
                product=product*15;
            if(comet[i]=='P')
                product=product*16;
            if(comet[i]=='Q')
                product=product*17;
            if(comet[i]=='R')
                product=product*18;
            if(comet[i]=='S')
                product=product*19;
            if(comet[i]=='T')
                product=product*20;
            if(comet[i]=='U')
                product=product*21;
            if(comet[i]=='V')
                product=product*22;
            if(comet[i]=='W')
                product=product*23;
            if(comet[i]=='X')
                product=product*24;
            if(comet[i]=='Y')
                product=product*25;
            if(comet[i]=='Z')
                product=product*26;
        }

        product = product%47;

        for(i=0; i<g; i++)
        {
            if(group[i]=='A')
                productg=productg*1;
            if(group[i]=='B')
                productg=productg*2;
            if(group[i]=='C')
                productg=productg*3;
            if(group[i]=='D')
                productg=productg*4;
            if(group[i]=='E')
                productg=productg*5;
            if(group[i]=='F')
                productg=productg*6;
            if(group[i]=='G')
                productg=productg*7;
            if(group[i]=='H')
                productg=productg*8;
            if(group[i]=='I')
                productg=productg*9;
            if(group[i]=='J')
                productg=productg*10;
            if(group[i]=='K')
                productg=productg*11;
            if(group[i]=='L')
                productg=productg*12;
            if(group[i]=='M')
                productg=productg*13;
            if(group[i]=='N')
                productg=productg*14;
            if(group[i]=='O')
                productg=productg*15;
            if(group[i]=='P')
                productg=productg*16;
            if(group[i]=='Q')
                productg=productg*17;
            if(group[i]=='R')
                productg=productg*18;
            if(group[i]=='S')
                productg=productg*19;
            if(group[i]=='T')
                productg=productg*20;
            if(group[i]=='U')
                productg=productg*21;
            if(group[i]=='V')
                productg=productg*22;
            if(group[i]=='W')
                productg=productg*23;
            if(group[i]=='X')
                productg=productg*24;
            if(group[i]=='Y')
                productg=productg*25;
            if(group[i]=='Z')
                productg=productg*26;
        }
        productg = productg%47;

        if(product == productg)
            printf("GO\n");
        else if(product!= productg)
            printf("STAY\n");
        product=1;
        productg=1;
    }

    return 0;
}

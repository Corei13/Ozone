/*
ID: mohamma107
LANG: C
TASK: ride
*/
#include <stdio.h>
#include <string.h>
int num(char a)
{
    int b = a-'A' ;
    int c = 1 + b ;
    return c ;
}

int main()
{
    FILE *fin = fopen("ride.in", "r");
    FILE *fout = fopen("ride.out", "w");
    char c[10],d[10] ;
    int i , j;
    long long a , b ;

    fscanf(fin," %s\n",c);
    fscanf(fin," %s\n",d);

    a = 1 ;
    b = 1 ;
    for(i=0; i < strlen(c) ; i++)
    {
        a = a*num(c[i]);
    }
    a = a% 47 ;
    for(i=0 ; i < strlen(d) ; i++)
    {
        b = b*num(d[i]);
    }
    b = b% 47 ;
    if(a==b)
        fprintf(fout,"GO\n");
    else
        fprintf(fout,"STAY\n");

    return 0 ;
}



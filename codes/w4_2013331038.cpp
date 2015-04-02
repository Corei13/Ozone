/*
ID: mohamma107
LANG: C
TASK: beads
*/
#include <stdio.h>
int main()
{
    int a , b ,c ,i,len,k,m,l;
    char e,f,s[1000];
    freopen("beads.in","r",stdin);
    freopen("beads.out","w",stdout);
    while(scanf("%d",&len) != EOF)
    {
        scanf("%s",s);
        k=0 ;
        c = len*2 ;
        for(i=len ; i<c-1 ; i++)
        {
            s[i] = s[k] ;
            k++ ;
        }
        for(i=0 ; i<len ; i++)
        {
            if(s[i] != 'w')
            {
                e=f=s[i];
                break ;
            }
        }
        len = len*2 ;
        c = 0 ;
        b = 0 ;
        a = 0 ;
        m = 0 ;
        l=0 ;
        k = 0 ;
        for(i=0 ; i<len ; i++)
        {
            if((c+b) == (len/2))
            {
                a = c+b ;
                break ;
            }
            if(s[i] == 'w')
            {
                c++ ;
            }
            else if(s[i] == e)
            {
                b++ ;
                b += c ;
                c = 0 ;
            }
            else if(l ==1)
            {
                b = b+c ;
                if(a<b)
                    a=b ;
                b = b-m+1 ;
                m = b - 1-c ;
                c = 0 ;
                e = s[i] ;
            }
            else
            {
                b = c+b+1 ;
                m = b-1 ;
                l = 1 ;
                e = s[i] ;
            }
            if(i == len-1)
            {
                b += c ;
                if(a<b)
                    a=b;
            }
        }
        printf("%d\n",a);
    }
    return 0 ;
}

/*
ID: mohamma107
LANG: C
TASK: friday
*/
#include <stdio.h>
int day[7];
int main()

{
    int i ,j ,k ,l , a , b ;

    freopen("friday.in","r",stdin);
    freopen("friday.out","w",stdout);

    scanf("%d",&b);
    b=b-1;

    day[0]=1;
    l=0 ;
    j=0 ;

level :
    i= 0 ;

    while(i<12)
    {

        if(i==1)
        {

            if((1900+l)%100 == 0)
            {

                if((1900+l)%400 ==0)
                    k=29;

                else
                    k = 28 ;
            }

            else if((l+1900)%4 == 0 )
                k = 29 ;

            else
                k = 28 ;

        }

        else if(i==3 || i==5 || i==8 || i==10)
            k = 30 ;

        else
            k = 31 ;

        a = k % 7;
        j = j + a ;

        if( j > 6 )
            j = j - 7 ;

        day[j]++ ;
        i++ ;

        if(l==b && i==11)
            break;

    }

    if(l<b)
    {
        l++;
        goto level ;
    }

    for(i=0 ; i<7 ; i++)
    {
        printf("%d",day[i]);

        if(i != 6)
        {
            printf(" ");
            continue;
        }
        printf("\n");
    }

    return 0 ;
}

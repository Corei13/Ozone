/*ID: algocer1
LANG: C
TASK: ride
*/

#include<stdio.h>
#include<string.h>

int main()
{
    freopen("ride.in", "r", stdin);
    freopen("ride.out", "w",stdout);



    char a1[7];

    char a2[7];

    int i,j,k,n1=1,n2=1,l1,l2;


    scanf("%s",a1);

    scanf("%s",a2);

    l1=strlen(a1);

    if(l1>6 || l1<1)  return 0;

   l2=strlen(a2);

    for(i=0;i<l1;i++)  {
        if(a1[i]<'A'||a1[i]>'Z')  return 0;
    }
    for(i=0;i<l2;i++)  {
        if(a2[i]<'A'||a2[i]>'Z')  return 0;
    }

    if(l2>6 || l2<1)  return 0;

    for(i = 0;i < l1;i++)  {
        n1 = n1 * (a1[i] - 64);
    }
     for(j = 0;j < l2;j++)  {
        n2 = n2 * (a2[j] - 64);
     }
     if((n1%47)==(n2%47))  printf("GO\n");
     else printf("STAY\n");

     return 0;
}

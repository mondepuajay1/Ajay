#include <stdio.h>

int main()
{
int i,sum1=0,sum2=0,diff;
int n=4,m=20;
for(i=1;i<=m;i++)
{
    if(i%n==0)
    //printf("%d",i);
    sum1=sum1+i;
    else
    sum2=sum2+i;
}
//printf("%d\n%d\n",sum1,sum2);
diff=sum2-sum1;
printf("%d",diff);


    return 0;
}
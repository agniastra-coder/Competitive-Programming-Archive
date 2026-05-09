#include<stdio.h>
int main()
{
    int i,T,a,x,y;

    scanf("%d",&T);
    for(i=1;i<=T;i++)
    {
        scanf("%d %d %d",&a,&x,&y);
        if ((a <= x && a >= y) || (a <= y && a >= x))
        {
            printf("NO\n");
        }
        else 
        {
            printf("YES\n");
        }
    }
}
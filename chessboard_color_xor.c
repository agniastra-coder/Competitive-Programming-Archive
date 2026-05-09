#include<stdio.h>
int odd_even(int a)
{
    if(a%2==0)//even
    {
        return 1;
    }
    else//odd
    {
        return 0;
    }
}
int black_white(char str[])
{
    int x;
    if(odd_even(str[0])==1 && odd_even(str[1])==1)//black
    {
         x=0;
    }
    else if(odd_even(str[0])==1 && odd_even(str[1])==0)//white
    {
        x=1;
    }
    else if(odd_even(str[0])==0 && odd_even(str[1])==1)//white
    {
        x = 1;
    }
    else if(odd_even(str[0])==0 && odd_even(str[1]==0))//black
    {
        x = 0;
    }
    return x;
}
int main()
{
    int T;
    char str1[10],str2[10];
    scanf("%d",&T);
    for(int i=1;i<=T;i++)
    {
        scanf("%s %s",str1,str2);
        printf("%d\n",black_white(str1)^black_white(str2));
}
return 0;
}
#include<stdio.h>
int main()
{
    int n,m,i=1,c=0,s,d;
    scanf("%d%d",&n,&m);
    while(c<=0)
    {
        s=n*i;
        d=s%10;
        if(d==m||d==0)
        {
            printf("%d\n",i);
            c++;		//it was improper :(
            break;
        }
        i++;
    }
    return 0;
}

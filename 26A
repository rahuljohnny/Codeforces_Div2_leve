# include <iostream>
# include <cstdio>
# include <cmath>
using namespace std;

int primeFactors(int n)
{
    int cd=0,cc=0,temp=0;
    while (n%2 == 0)
    {
        cc=1;
        n = n/2;
    }
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        while (n%i == 0)
        {
            if(i!=temp)
               cc++;
            if(cc>2)
               break;
            n = n/i;
            temp=i;
        }
    }
    if(cc<=2 && n > 2)
    {
        cc++;
    }
        if(cc==2)
            cd++;
        return cd;
}
int main()
{
    int i,n,p;
    cin>>n;
        p=0;
        if(n<6)
            cout<<"0"<<endl;
        else
        {
            for(i=6;i<=n;i++)
            p+=primeFactors(i);
            printf ("%d\n", p);
        }
    return 0;
}

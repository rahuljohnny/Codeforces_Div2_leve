#include <bits/stdc++.h>
using namespace std;
main()
{
    long i,j,k,row,col,cou=0,sum=0,a,n,b,d;
    scanf("%ld %ld %ld",&n,&b,&d);
    for(i=0;i<n;i++){
            scanf("%ld",&a);
        if(a<=b)
        {
            sum+=a;
        }
        if(sum>d)
        {
            cou++;
            sum=0;
        }

    }
    cout<<cou<<endl;
        return 0;
}

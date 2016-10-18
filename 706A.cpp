#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,j,k,x,y,v,x1,y1,x2,dist,dist2,dist3=999999,dist0,dist1;

        int i;
        cin>>x1>>y1>>n;
        for(i=0;i<n;i++)
        {
            cin>>x>>y>>v;
            dist=(x-x1)*(x-x1);
            dist0=(y-y1)*(y-y1);
            dist1=sqrt(dist+dist0);
            dist2=dist1/v;
            if(dist2<dist3)
                dist3=dist2;
        }
        printf("%0.20f\n",dist3);
    return 0;
}

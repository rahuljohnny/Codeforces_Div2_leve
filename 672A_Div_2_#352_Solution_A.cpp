#include<bits/stdc++.h>

using namespace std;
int main()
{
    int i,n;
    char sss[999999];
    cin>>n;
    int j=0;
    string str;
    for(i=0;i<=n;i++)
    {
        stringstream ss;
        ss<<i;
        str=ss.str();
        for(int k=0;k<str.length();k++)
        {
        sss[j]=str[k];
        j++;
       }
    }
    cout<<sss[n]<<endl;

return 0;
}

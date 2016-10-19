#include<bits/stdc++.h>
using namespace std;
main()
{
	long a,b,c,d,e,i,n,j,m=0,cr=0,k,l;
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a>>b;
		if(a>b)
		m++;
		else if(b>a)
		cr++;
	}
	if(m>cr)
	cout<<"Mishka"<<endl;
	else if(m<cr)
	cout<<"Chris"<<endl;
	else if(m==cr)
	cout<<"Friendship is magic!^^"<<endl;
return 0;
}

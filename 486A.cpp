#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	ll n;
	cin>>n;
	ll oddsum=0,evensum=0,ans=0;
	ll p1,p2;
	if(n%2!=0)
	{
		p1=n/2+1;
		p2=n/2;
		oddsum=-(p1*p1);
		evensum=p2*(p2+1);
	}
	else
	{
		p1=n/2;
		oddsum=-(p1*p1);
		evensum=p1*(p1+1);
	}
	ans=oddsum+evensum;
	cout<<ans<<endl;
	return 0;
}
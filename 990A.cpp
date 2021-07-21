#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ll n,m,a,b,x,y,z,ans1,ans2,ans;
	cin>>n>>m>>a>>b;
	if(n%m==0)
	{
		cout<<"0"<<endl;
		return 0;
	}
	x=n/m;
	y=m*x;
	//if(n>y)
	//{
		ans1=(abs(n-y)*b);
	//}
	z=(x+1)*m;
	//if(z>n)
	//{
		ans2=(abs(z-n)*a);
	//}
	ans=min(ans1,ans2);
	cout<<ans<<endl;
	return 0;
}
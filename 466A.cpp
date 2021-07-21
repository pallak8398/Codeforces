#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,a,b;
	cin>>n>>m>>a>>b;
	int sum1=0,sum2=0,ans=0;
	int x=(n/m)*b;
	ans+=min(x,(n*a));
	int y=(n%m)*a;
	ans+=min(y,b);
	cout<<ans<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long long int n,q,ans;
	cin>>n;
	vector<long long int>v;
	while(n--)
	{
		long long int x;
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	cin>>q;
	while(q--)
	{
		long long int m;
		cin>>m;
		ans=upper_bound(v.begin(),v.end(),m)-v.begin();
		cout<<ans<<endl;
	}
	return 0;
}
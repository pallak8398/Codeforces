#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,k;
	cin>>n>>k;
	map<int,int>mp;
	int ans=0;
	for(int i=0;i<n;i++)
	{
		int num;
		cin>>num;
		mp[num]++;
	}
	for(auto it=mp.begin();it!=mp.end();it++)
	{
		ans+=(it->second/2);
	}
	if(n%2!=0)
	{
		cout<<ans+n/2+1;
	}
	else
	{
		cout<<ans+n/2;
	}
	return 0;
}
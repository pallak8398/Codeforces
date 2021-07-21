#include <bits/stdc++.h>
using namespace std;

int main() 
{
	vector<pair<int,int>>v;
	int n,hr,min;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>hr>>min;
		v.push_back({hr,min});
	}
	int count=0,ans=1;
	for(int i=0;i<n;i++)
	{
		if(v[i].first==v[i+1].first && v[i].second==v[i+1].second)
		{
			count=1;
			while(v[i].first==v[i+1].first && v[i].second==v[i+1].second && i<n-1 )
			{
				count++;
				i++;
			}
			ans=max(count,ans);
		}
	}
	cout<<ans<<endl;
}
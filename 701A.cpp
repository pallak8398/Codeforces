#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n];
	vector<pair<int,int>>v;
	vector<pair<int,int>>::iterator it;
	for(int i=1;i<=n;i++)
	{
		cin>>A[i];
		v.push_back({A[i],i});
	}
	sort(v.begin(),v.end());
	/*for(it=v.begin();it!=v.end();it++)
	{
		cout<<it->first<<" "<<it->second<<endl;
	}
	cout<<endl;*/
	for(int i=0;i<n/2;i++)
	{
		cout<<v[i].second<<" "<<v[n-i-1].second<<endl;
	}
	return 0;
}
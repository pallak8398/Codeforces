#include <bits/stdc++.h>
using namespace std;
bool comp(const pair<int,int> &a,const pair<int,int> &b)
{
	return a.first<b.first;
}
int main() 
{
	int n,k;
	vector<pair<int,int>>v;
	vector<int>v1;
	cin>>n>>k;
	int A[n];
	int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		v.push_back({A[i],i+1});
	}
	sort(v.begin(),v.end(),comp);
	// for(int i=0;i<v.size();i++)
	// 	cout<<v[i].first<<" ";
	// cout<<endl;
	for(int i=0;i<v.size();i++)
	{
		if(v[i].first>k)
			break;
		else
		{
			count++;
			v1.push_back(v[i].second);
			k=k-v[i].first;
		}
	}
	cout<<count<<endl;
	for(int i=0;i<v1.size();i++)
		cout<<v1[i]<<" ";
	cout<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,k,flag,i,x;
	vector<pair<int,int>>v;
	vector<pair<int,int>>::iterator it;
	cin>>n>>k;
	int A[n];
	for(int i=1;i<=n;i++)
	{
		cin>>A[i];
	}
	if(k==1)
	{
		cout<<"YES"<<endl;
		cout<<"1"<<endl;
		return 0;
	}
	v.push_back({A[1],1});
	for(i=2;i<=n;i++)
	{
		x=A[i];
		flag=0;
		for(it=v.begin();it!=v.end();it++)
		{
			if(x==(it->first))
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
		{
			v.push_back({x,i});
			//cout<<x<<" "<<i<<endl;
		}
		if(v.size()==k)
		{
			 break;
		}
	}
	if(i>n)
	{
		cout<<"NO"<<endl;
		return 0;
	}
	cout<<"YES"<<endl;
	for(it=v.begin();it!=v.end();it++)
	{
		cout<<it->second<<" ";
	}
	return 0;
}
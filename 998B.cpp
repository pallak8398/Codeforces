#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,b;
	cin>>n>>b;
	int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	vector<int>v;
	int odd=0,even=0,x=0;
	for(int i=0;i<n;i++)
	{
		if(A[i]%2!=0)
			odd++;
		else
			even++;
		if(odd==even && i!=n-1)
		{
			x=abs(A[i]-A[i+1]);
			v.push_back(x);
		}
	}
	sort(v.begin(),v.end());
	int ans=0;
	for(int i=0;i<v.size();i++)
	{
		if(v[i]<=b)
		{
			ans++;
			b=b-v[i];
		}
	}
	cout<<ans<<endl;
}
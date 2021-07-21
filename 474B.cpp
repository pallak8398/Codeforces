#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,m;
	cin>>n;
	int A[n],C[n],num;
	vector<int>v;
	for(int i=0;i<n;i++)
		cin>>A[i];
	v.push_back(A[0]);
	int res=A[0];
	for(int i=1;i<n;i++)
	{
		res+=A[i];
		v.push_back(res);
	}
	cin>>m;
	int ans;
	while(m--)
	{
		cin>>num;
		ans=lower_bound(v.begin(),v.end(),num)-v.begin();
		cout<<ans+1<<endl;
		
	}
	return 0;
}
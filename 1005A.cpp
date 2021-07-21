#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int A[n],one=0;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		if(A[i]==1)
			one++;
	}
	cout<<one<<endl;
	vector<int>ans;
	int count=1;
	for(int i=1;i<n;i++)
	{
		if(A[i]==1)
		{
			ans.push_back(count);
			count=1;
		}
		else if(A[i]!=1)
		{
			count++;
		}
	}
	ans.push_back(count);
	for(int i=0;i<ans.size();i++)
		cout<<ans[i]<<" ";
	cout<<endl;
	return 0;
}
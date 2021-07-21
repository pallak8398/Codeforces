#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	int A[n];
	long int sum=0,x;
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		sum+=A[i];
	}
	if(n==1)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	if(n==2)
	{
		if(A[0]==A[1])
		{
			cout<<"-1"<<endl;
			return 0;
		}
	}
	sort(A,A+n,greater<int>());
	int k=1;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		x+=A[i];
		v.push_back(A[i]);
		if(x>sum-x && sum-x!=0)
		{
			cout<<k<<endl;
			for(int j=0;j<v.size();j++)
				cout<<v[j]<<" ";
			return 0;
		}
		else
			k++;
	}
	cout<<"-1"<<endl;
	return 0;
}
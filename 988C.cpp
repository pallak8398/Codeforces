#include <bits/stdc++.h>
using namespace std;
struct store
{
	int ki;
	int idx;
	int sum;
};
bool compare(store a,store b)
{
	return a.sum<b.sum;
}
int main() 
{
	vector<store>v;
	store s;
	int k;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		int n,tot=0;
		cin>>n;
		int A[n];
		for(int j=1;j<=n;j++)
		{
			cin>>A[j];
			tot+=A[j];
		}
		for(int j=1;j<=n;j++)
		{
			s.sum=tot-A[j];
			s.ki=i;
			s.idx=j;
			v.push_back(s);
		}
	}
	sort(v.begin(),v.end(),compare);
	int flag=0;
	for(int j=1;j<v.size();j++)
	{
		if(v[j].sum==v[j-1].sum && v[j].ki!=v[j-1].ki)
		{
			cout<<"YES"<<endl;
			cout<<v[j].ki<<" "<<v[j].idx<<endl;
			cout<<v[j-1].ki<<" "<<v[j-1].idx<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
	return 0;
}
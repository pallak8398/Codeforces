#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() 
{
	int n,m,a,b;
	cin>>n>>m;
	set<int>s;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		for(int j=0;j<a;j++)
		{
			cin>>b;
			s.insert(b);
		}
	}
	if(s.size()==m)
	{
		cout<<"YES"<<endl;
	}
	else
		cout<<"NO"<<endl;
	return 0;
}
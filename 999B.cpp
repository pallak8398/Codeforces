#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,j,i;
	cin>>n;
	string s,s1;
	cin>>s;
	vector<int>v;
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
			v.push_back(i);
	}
	for(i=0;i<v.size();i++)
	{
		s1=s.substr(0,v[i]);
		reverse(s1.begin(),s1.end());
		for(j=v[i];j<n;j++)
		{
			s1+=s[j];
		}
		s=s1;
	}
	cout<<s<<endl;
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	string s;
	map<string,int>mp;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		mp[s]++;
	}
	long long int count=0;
	for(int i=0;i<n;i++)
	{
		cin>>s;
		if(mp[s]>0)
			mp[s]--;
		else
			count++;
	}
	cout<<count<<endl;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,m,i;
	cin>>n>>m;
	map<string,string>mp;
	map<string,string>::iterator it;
	while(m--)
	{
		string s1,s2;
		cin>>s1>>s2;
		if(s1.length()<=s2.length())
			mp.insert(pair<string,string>(s1,s1));
		else
			mp.insert(pair<string,string>(s1,s2));
	}
	string A[n];
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		for(it=mp.begin();it!=mp.end();it++)
		{
			if(A[i]==it->first)
			{
				cout<<it->second<<" ";
				break;
			}
		}
	}
	cout<<endl;
	return 0;
}
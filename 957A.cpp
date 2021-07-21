#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='?' && s[i-1]=='?')
			flag=1;
		else if(s[i]=='?' && i+1<n && s[i-1]==s[i+1])
			flag=1;
		else if(s[i]==s[i-1])
		{
			cout<<"No"<<endl;
			return 0;
		}
	}
	if(flag==1 || s[0]=='?' || s[n-1]=='?')
	{
		cout<<"Yes"<<endl;
	}
	else
		cout<<"No"<<endl;
	return 0;
}

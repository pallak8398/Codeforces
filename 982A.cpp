#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	cin>>n;
	string s;
	cin>>s;
	if(n==1)
	{
		cout<<"Yes"<<endl;
		return 0;
	}
	if(n==2)
	{
		if(s[0]=='1' && s[1]=='1')
		{
			cout<<"No"<<endl;
			return 0;
		}
		else
		{
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	for(int i=0;i<n;i++)
	{
		if(s[i]=='1' && s[i+1]=='1')
		{
			cout<<"No"<<endl;
			return 0;
		}
	}
	int flag=0;
	int i=0;
	while(i<n)
	{
		if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='1')
		{
			i=i+3;
			continue;
		}
		else if(s[i]=='1' && s[i+1]=='0' && s[i+2]=='0' && s[i+3]=='1')
		{
			i=i+4;
			continue;
		}
		else
		{
			flag=1;
			i++;
		}
	}
	if(flag==0)
	{
		cout<<"Yes"<<endl;
	}
	else if(flag==1)
		cout<<"No"<<endl;
	return 0;
}
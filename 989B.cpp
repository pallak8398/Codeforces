#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,p,k,flag=0;
	cin>>n>>p;
	string s;
	cin>>s;
	for(int i=0;i<n-p;i++)
	{
		k=i+p;
		if(s[i]!='.' && s[k]=='.')
		{
			flag=1;
			if(s[i]=='0')
				s[k]='1';
			else
				s[k]='0';
				
		}
		else if(s[i]=='.' && s[k]!='.')
		{
			flag=1;
			if(s[k]=='0')
				s[i]='1';
			else
				s[i]='0';
		}
		else if(s[i]=='.' && s[k]=='.')
		{
			flag=1;
			s[i]='0';
			s[k]='1';
		}
		else if((s[i]=='0' && s[k]=='1') || (s[i]=='1' && s[k]=='0'))
		{
			flag=1;
		}
	}
	if(flag==1)
	{
		for(int i=0;i<n;i++)
		{
			if(s[i]=='.')
				s[i]='0';
		}
		cout<<s<<endl;
	}
	else if(flag==0)
	{
		cout<<"No"<<endl;
	}
	return 0;
}
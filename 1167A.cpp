#include<bits/stdc++.h>
using namespace std;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		int flag=0;
		if(s.length()==11)
		{
			if(s[0]=='8')
			{
				cout<<"YES"<<endl;
			}
			else
			{
				cout<<"NO"<<endl;
			}
		}
		else if(s.length()>11)
		{
			int i;
			for(i=0;i<s.length();i++)
			{
				if(s[i]=='8')
				{
					flag=1;
					break;
				}
			}
			if(flag==1 && (s.length()-i)>=11)
			{
				cout<<"YES"<<endl;
			}
			else
				cout<<"NO"<<endl;
		}
		else 
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
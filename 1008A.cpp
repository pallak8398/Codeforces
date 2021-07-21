#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	int flag=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='n')
		{
			continue;
		}
		else if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u')
		{
			if(s[i+1]!='a' && s[i+1]!='e' && s[i+1]!='i' && s[i+1]!='o' && s[i+1]!='u')
			{
				flag=1;
				break;
			}
			else 
				continue;
		}
	}
	if(flag==1)
	{
		cout<<"NO"<<endl;
	}
	else
		cout<<"YES"<<endl;
	return 0;
}
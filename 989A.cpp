#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	int len=s.length();
	for(int i=0;i<len-2;i++)
	{
		if(s[i]!='.' && s[i+1]!='.' && s[i+2]!='.')
		{
			if(s[i]!=s[i+1] && s[i+1]!=s[i+2] && s[i]!=s[i+2])
			{
				cout<<"Yes"<<endl;
				return 0;
			}
		}
	}
	cout<<"No"<<endl;
	return 0;
}
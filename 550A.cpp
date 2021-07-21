#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	int flag1=0,flag2=0;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='A' && s[i+1]=='B')
		{
			flag1=1;
			i++;
		}
		else if(s[i]=='B' && s[i+1]=='A')
		{
			flag2=1;
			i++;
		}
	}
	if(flag1==1 && flag2==1)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}
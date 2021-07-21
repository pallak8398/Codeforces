#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s,str;
	cin>>s;
	int flag=1;
	//vector<string>v;
	for(int i=0;i<s.length();i++)
	{
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
		{
			i=i+2;
			if(flag!=1)
				cout<<" ";
			continue;
		}
		else
		{
			flag=0;
			cout<<s[i];
		}
		
	}
	
	return 0;
}
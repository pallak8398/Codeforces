#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	int flag=0,flag2=0;
	for(int i=0;i<s.length();i++)
	{
		if(!isupper(s[i]))
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		if(islower(s[0]))
		{
			for(int i=1;i<s.length();i++)
			{
				if(!isupper(s[i]))
				{
					flag2=1;
					break;
				}
			}
			if(flag2==0)
			{
				s[0]=toupper(s[0]);
				for(int i=1;i<s.length();i++)
				{
					s[i]=tolower(s[i]);
				}
				cout<<s<<endl;
			}
			else 
			{
				cout<<s<<endl;
			}
		}
		else
			cout<<s<<endl;
	}
	else 
	{
		for(int i=0;i<s.length();i++)
		{
			s[i]=tolower(s[i]);
		}
		cout<<s<<endl;
	}
	// if(isupper(s[0]) && isupper(s[1]))
	// {
	// 	for(int i=0;i<s.length();i++)
	// 	{
	// 		s[i]=tolower(s[i]);
	// 	}
	// 	cout<<s<<endl;
	// }
	// else if(isupper(s[0]) && islower(s[1]))
	// {
	// 	cout<<s<<endl;
	// }
	// else if(islower(s[0]) && isupper(s[1]))
	// {
	// 	int flag=0;
	// 	for(int i=1;i<s.length();i++)
	// 	{
	// 		if(!isupper(s[i]))
	// 		{
	// 			flag=1;
	// 			break;
	// 		}
	// 	}
	// 	if(flag==0)
	// 	{
	// 	s[0]=toupper(s[0]);
	// 	for(int i=1;i<s.length();i++)
	// 	{
	// 		s[i]=tolower(s[i]);
	// 	}
	// 	cout<<s<<endl;
	// 	}
	// 	else if(flag==1)
	// 		cout<<s<<endl;
	// }
	// else 
	// 	cout<<s<<endl;
	return 0;
}
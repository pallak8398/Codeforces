#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int min=9999999,pos,flag=0;
	for(int i=0;i<s.length();i++)
	{
		if(int(s[i])%2==0)
		{
			flag=1;
			pos=i;
			if(s[i]<s[s.length()-1])
			{
				//pos=i;
				break;
			}
		}
	}
	if(flag==0)
	{
		cout<<"-1"<<endl;
		return 0;
	}
	swap(s[pos],s[s.length()-1]);
	cout<<s;
	return 0;
}
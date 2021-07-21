#include<bits/stdc++.h>
using namespace std;
string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
int main()
{
	char direction;
	cin>>direction;
	string s;
	cin>>s;
	vector<char>ans;
	for(int i=0;i<s.length();i++)
	{
		for(int j=0;j<keyboard.length();j++)
		{
			if(s[i]==keyboard[j])
			{
				if(direction=='L')
				{
					ans.push_back(keyboard[j+1]);
				}
				else
				{
					ans.push_back(keyboard[j-1]);
				}
				break;
			}
		}
	}
	for(int i=0;i<ans.size();i++)
		cout<<ans[i];
	return 0;
}
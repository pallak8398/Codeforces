#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n;
	vector<int>v;
	cin>>n;
	string s;
	cin>>s;
	int count1=0,count=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]=='B')
		{
			count=1;
			while(s[i+1]=='B' && i<n)
			{
				count++;
				i++;
			}
			v.push_back(count);
			count1++;
		}
	}
	cout<<count1<<endl;
	if(v.size()>0)
	{
		for(int i=0;i<v.size();i++)
		{
			cout<<v[i]<<" ";
		}
	}
	//cout<<endl;
	return 0;
}
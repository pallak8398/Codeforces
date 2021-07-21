#include <bits/stdc++.h>
using namespace std;

int main() 
{
	string s;
	cin>>s;
	long long int count=0,i,j,k;
	for(i=0;i<s.length();i++)
	{
		if(s[i]=='Q')
		{
			for(j=i+1;j<s.length();j++)
			{
				if(s[j]=='A')
				{
					for(k=j+1;k<s.length();k++)
					{
						if(s[k]=='Q')
						{
							count++;
						}
					}
				}
			}
		}
	}
	cout<<count<<endl;
	return 0;
}
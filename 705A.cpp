#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	string s="";
	for(int i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			s+="I love ";
			if(i!=n)
			{
				s+="that ";
			}
		}
		else
		{
			s+="I hate ";
			if(i!=n)
			{
				s+="that ";
			}
			
		}
	}
	cout<<s<<"it"<<endl;
	return 0;
}
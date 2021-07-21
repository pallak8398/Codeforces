#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,five=0,zero=0;
	cin>>n;
	while(n--)
	{
		char ch;
		cin>>ch;
		if(ch=='5')
			five++;
		else
			zero++;
	}
	int num=five/9;
	if(num>0 && zero>0)
	{
		for(int i=0;i<num;i++)
			cout<<"555555555";
		while(zero--)
		{
			cout<<"0";
		}
	}
	else if(zero>0)
		cout<<"0";
	else
		cout<<"-1";
	return 0;
}

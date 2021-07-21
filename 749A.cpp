#include <bits/stdc++.h>
using namespace std;

int main() 
{
	long int n,count=0;
	vector<int>v;
	vector<int>::iterator it;
	cin>>n;
	while(n%2!=0)
	{
		n=n-3;
		v.push_back(3);
		count++;
	}
	while(n>0)
	{
		n=n-2;
		v.push_back(2);
		count++;
	}
	cout<<count<<endl;
	for(it=v.begin();it!=v.end();it++)
		cout<<*it<<" ";
	cout<<endl;
	return 0;
}
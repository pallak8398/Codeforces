#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int x;
	cin>>x;
	vector<long int>v;
	vector<long int>::iterator it;
	int i=0;
	while(x>0)
	{
		v.push_back(x%2);
		x=x/2;
		i++;
	}
	int sum=0;
	for(it=v.begin();it!=v.end();it++)
	{
		sum+=(*it);
	}
	cout<<sum<<endl;
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,p,q,num;
	set<int>s;
	cin>>n>>p;
	while(p--)
	{
		cin>>num;
		s.insert(num);
	}
	cin>>q;
	while(q--)
	{
		cin>>num;
		s.insert(num);
	}
	if(s.size()==n)
		cout<<"I become the guy."<<endl;
	else
		cout<<"Oh, my keyboard!"<<endl;
	return 0;
}
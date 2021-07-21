#include <bits/stdc++.h>
using namespace std;

int main()
{
	int num;
	set<int>s;
	for(int i=0;i<4;i++)
	{
		cin>>num;
		s.insert(num);
	}
	cout<<4-s.size()<<endl;
	return 0;
}
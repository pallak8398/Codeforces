#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,i;
	cin>>n;
	int A[n],flag=0;
	set<int>s;
	set<int>::iterator it;
	for(i=0;i<n;i++)
	{
		cin>>A[i];
		s.insert(A[i]);
	}
	for(it=s.begin();it!=s.end();it++)
	{
		if(*it==0)
			flag=1;
	}
	if(flag==1)
	{
		cout<<s.size()-1<<endl;
	}
	else
	{
		cout<<s.size()<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
struct dragon
{
	int x;
	int y;
};
bool comparison(dragon a,dragon b)
{
	return (a.x<b.x);
}
int main()
{
	int s,n,a,b;
	cin>>s>>n;
	dragon A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i].x>>A[i].y;
		//A[i].x=a;
		//A[i].y=b;
	}
	sort(A,A+n,comparison);
	int i;
	for(i=0;i<n;i++)
	{
		if(s>A[i].x)
		{
			s+=A[i].y;
		}
		else 
		{
			cout<<"NO"<<endl;
			return 0;
		}
	}
	if(i==n)
		cout<<"YES"<<endl;
	return 0;
}
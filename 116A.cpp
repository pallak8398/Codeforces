#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,cap=0,max=0;
	cin>>n;
	int a[n],b[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
	}
	cap=b[0];
	max=cap;
	for(int i=1;i<n-1;i++)
	{
		cap-=a[i];
		cap+=b[i];
		if(cap>max)
			max=cap;
	}
	cout<<max<<endl;
	return 0;
}	
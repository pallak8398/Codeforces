#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int n,m,l,r;
	string s;
	cin>>s;
	n=s.length();
	long int A[n+1];
	A[0]=0;
	A[1]=0;
	long int i,k=2,count=0;
	for(i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
			count++;
		A[k]=count;
		k++;
	}
	cin>>m;
	while(m--)
	{
		cin>>l>>r;
		cout<<A[r]-A[l]<<endl;
	}
	return 0;
}
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,f1=0,f2=0,f3=0,f4=0;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
	{
		cin>>A[i];
		if(A[i]==1)
			f1++;
		else if(A[i]==2)
			f2++;
		else if(A[i]==3)
			f3++;
		else if(A[i]==4)
			f4++;
	}
	int ans=f4+f3;
	f1=f1-f3;
	ans+=(f2/2);
	if(f2%2==1)
	{
		ans++;
		f1=f1-2;
	}
	if(f1>0)
	{
	ans+=(f1/4);
	if(f1%4!=0)
		ans++;
	}
	cout<<ans<<endl;
	return 0;
}
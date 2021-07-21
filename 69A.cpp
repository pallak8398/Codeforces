#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int A[n][3];
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<3;j++)
			cin>>A[i][j];
	}
	int sum1=0,sum2=0,sum3=0;
	for(int i=0;i<n;i++)
	{
		sum1+=A[i][0];
		sum2+=A[i][1];
		sum3+=A[i][2];
	}
	if(sum1==0 && sum2==0 && sum3==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
	return 0;
}

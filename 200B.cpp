#include <bits/stdc++.h>
using namespace std;

int main() 
{
	double n;
	cin>>n;
	int A[100000];
	double sum=0;
	for(int i=0;i<n;i++)	
	{
		cin>>A[i];
		sum+=A[i];
	}
	//cout<<sum<<endl;
	double a=sum/(n*100);
	a=a*100;
	printf("%.4lf",a);
	return 0;
}
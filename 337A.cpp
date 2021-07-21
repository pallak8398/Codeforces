#include <bits/stdc++.h>
using namespace std;

int main() 
{
	int n,m;
	cin>>n>>m;
	int A[m];
	for(int i=0;i<m;i++)
		cin>>A[i];
	sort(A,A+m);
	int mini=A[m-1]-A[0];
	for(int i=0;i<m-n+1;i++)
	{
		mini=min(mini,A[i+n-1]-A[i]);
	}
	cout<<mini<<endl;
	return 0;
}
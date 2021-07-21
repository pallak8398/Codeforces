#include<bits/stdc++.h>
using namespace std;
int main()
{
	int A[5][5],a,b;
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			cin>>A[i][j];
			if(A[i][j]==1)
			{
				a=i;
				b=j;
			}
		}
	}
	int rows=abs(a-3);
	int col=abs(b-3);
	cout<<rows+col<<endl;
	return 0;
}
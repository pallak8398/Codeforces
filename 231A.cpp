#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int count1=0;
	while(n--)
	{
		int A[3],count=0;
		for(int i=0;i<3;i++)
		{
			cin>>A[i];
			if(A[i]==1)
				count++;
		}
		if(count>=2)	
			count1++;
	}
	cout<<count1<<endl;
	return 0;
}
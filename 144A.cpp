#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,max=0,min=999,min_pos,max_pos,count=0;
	cin>>n;
	int A[n];
	for(int i=0;i<n;i++)
		cin>>A[i];
	for(int i=0;i<n;i++)
	{
		if(A[i]>max)
		{
			max=A[i];
			max_pos=i;
			//cout<<max_pos<<endl;
		}
		if(A[i]<=min)
		{
			min=A[i];
			min_pos=i;
			//cout<<min_pos<<endl;
		}
	}
	//cout<<min<<" "<<max<<endl;
	//cout<<min_pos<<" "<<max_pos<<endl;
	if(min_pos<max_pos)
		count=max_pos+(n-1-min_pos)-1;
	else if(min_pos>max_pos)
		count=max_pos+(n-1-min_pos);
	cout<<count<<endl;
	return 0;
}
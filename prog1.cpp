#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.in","r",stdin);
	freopen("output.out","w",stdout);
	int t,i,j,x,p,n;

	int a[1005];
	memset(a,0,sizeof(a));
	for(i=2;i<=1000;i++)
		for(j=2*i;j<=1000;j+=i)
			a[j]=max(1+a[i],a[j]);

	cin>>t;
	while(t--){
		cin>>n;
		x=0;
		for(i=0;i<n;i++)
		{
			cin>>p;
			x=x^a[p];
		}
		if(x!=0)
			cout<<"A"<<endl;
		else
			cout<<"B"<<endl;
	}
	return 0;
}

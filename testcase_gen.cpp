#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("input.in","w",stdout);
	int t,i,k,p,n;
	cout<<100<<endl;
	for(k=0;k<100;k++){
		n=rand()%1000+1;
		cout<<n<<endl;
		for(i=0;i<n;i++){
			p=rand()%1000+1;
			cout<<p<<" ";
		}
		cout<<endl;
	}
}

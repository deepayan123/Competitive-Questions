#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a[100005],gcd_left[100005],gcd_right[100005];
ll gcd(ll a,ll b){
    if(a%b==0) return b;
    return gcd(b,a%b);
}
int main(){

    ll i,n,p,t,flag;
    cin>>t;
    while(t--){
    cin>>n;

    for(i=1;i<=n;i++){
        cin>>a[i];

    }

    gcd_left[1]=a[1];
    for(i=2;i<=n;i++){
        gcd_left[i]=gcd(a[i],gcd_left[i-1]);
    }
    gcd_right[n]=a[n];
    for(i=n-1;i>=0;i--){
        gcd_right[i]=gcd(a[i],gcd_right[i+1]);
    }
    flag=0;
    if(a[1]%gcd_right[2]!=0){
        cout<<gcd_right[2]<<endl;
        flag=1;
    }
    else if(a[n]%gcd_left[n-1]!=0){
        cout<<gcd_left[n-1]<<endl;
        flag=1;
    }
    else{
        for(i=2;i<=n-1;i++){
            p=gcd(gcd_left[i-1],gcd_right[i+1]);
            if(a[i]%p!=0)
            {
                cout<<p<<endl;
                flag=1;
                break;
            }
        }
    }
    if(flag==0) cout<<-1<<endl;
    }
    return 0;
}

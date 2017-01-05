#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll i,s,n,x,c,p,t,prevsum;
    bool flag;
    vector<ll> cash;
    std::vector<ll>::iterator low;
    cin>>t;
    while(t--)
    {
        cash.clear();
        scanf("%lld %lld %lld",&s,&n,&x);
        c=s;prevsum=s;
        cash.push_back(s);
        flag=true;
        for(i=0;i<n;i++)
        {
            scanf("%lld",&p);
            c=prevsum+p;
            if(c>x)
                flag=false;
            if(flag)
                cash.push_back(c);
            prevsum=c+prevsum;
        }

        flag=true;
        ll p;
        while(x>0)
        {
            low=std::lower_bound (cash.begin(), cash.end(), x);
            p=low-cash.begin();
            if(p<cash.size() && x==cash[p])
                x=0;
            if(p==0 && cash[p]!=x)
                break;
            x%=cash[p-1];
        }
        if(x==0) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}

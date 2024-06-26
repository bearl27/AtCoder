#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#define _USE_MATH_DEFINES
#include<math.h>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>
#include<utility>
#include<set>
#include<list>
#include<cmath>
#include<stdio.h>
#include<string.h>
#include<iomanip>
#include<cstdio>
#include<cstdlib>
#include<cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for(int i = 0; i < (n); i++)

///////////////////////////////////////

signed main(){
    ll n,k;cin>>n>>k;
    vector<ll>a(n+1),b(n+1);
    for(ll i=1;i<=n;i++)cin>>a[i];
    for(ll i=1;i<=n;i++)cin>>b[i];
    vector<ll>dp(n+1,false),ep(n+1,false);

    //初期値
    dp[1]=ep[1]=true;

    //遷移
    for(ll i=2;i<=n;i++){
        if(dp[i-1]){
            if(abs(a[i-1]-a[i])<=k)dp[i]=true;
            if(abs(a[i-1]-b[i])<=k)ep[i]=true;
        }
        if(ep[i-1]){
            if(abs(b[i-1]-a[i])<=k)dp[i]=true;
            if(abs(b[i-1]-b[i])<=k)ep[i]=true;
        }
    }

    //答え
    if(dp[n]||ep[n])cout<<"Yes"<<endl;
    else cout<<"No"<<endl;

    return 0;
}

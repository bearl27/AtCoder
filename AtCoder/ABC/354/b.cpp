#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<map>
#include<queue>
#include<deque>
#include<stack>
#include<cstdio>
#include<utility>
#include<set>
#include<list>
#include<cmath>
#include<iomanip>
#include<cstdio>
#include<cstring>
using namespace std;
using ll = long long;
using pii = pair<int, int>;
using vpii = vector<pii>;
using pll = pair<ll, ll>;
using vpll = vector<pll>;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define rep1(i,n) for(int i = 1; i < (n); i++)

///////////////////////////////////////

int main(){
    int n;
    cin >> n;
    vector<string> a(n);
    int sum = 0;
    rep(i,n){
        int num;
        cin >> a[i] >> num;
        sum += num;
    }
    int ans = sum % n;
    sort(a.begin(),a.end());
    cout << a[ans] << endl;
    return 0;
}

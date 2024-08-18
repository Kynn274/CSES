#include <bits/stdc++.h>
#define arrsize 1000006
#define ll long long
using namespace std;

ll n, ans(-1e9);
ll a[arrsize], f[arrsize];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    
	cin >> n;
    for(ll i = 0; i < n; i++) cin >> a[i];
    
	f[0] = a[0];
    for(ll i = 1; i < n; i++)
        f[i] = max(f[i - 1] + a[i], a[i]);
    for(ll i = 0; i < n; i++)
        ans = max(ans, f[i]);
    
    cout << ans;
    
	return 0;
}
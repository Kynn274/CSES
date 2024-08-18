#include <bits/stdc++.h>
#define fmax 1000006
using namespace std;
 
long long n, a, b, _max(-1e9);
long long f[fmax];
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    long long t(0);
    memset(f, 0, sizeof f);
    while(n--){
        cin >> a >> b;
        f[a] = 1;
        f[b] = -1;
        t = max(t, b);
    }
    
    for(long long i = 1; i <= t; i++){
        f[i] += f[i - 1];
        _max = max(_max, f[i]);
    }
    cout << _max;
    
    return 0;
}
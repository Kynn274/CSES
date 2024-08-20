#include <bits/stdc++.h>
#define fmax 1000006
using namespace std;

long long a[fmax], f[fmax];
long long x, n, num(0);
map <long long, long long> m;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> x;
    m[0] = 1;
    for(long long i = 0; i < n; i++) cin >> a[i];
    for(long long i = 0; i < n; i++){
        f[i] = f[i - 1] + a[i];
        m[f[i]] += 1;
        num += m[f[i] - x];
    }

    cout << num;
    return 0;
}
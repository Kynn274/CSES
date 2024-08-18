#include <bits/stdc++.h>
using namespace std;

long long m, n, k, num(0);
long long a[1000006], b[1000006];

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> m >> k;
    for(long long i = 0; i < n; i++) cin >> a[i];
    for(long long i = 0; i < m; i++) cin >> b[i];

    sort(a, a + n);
    sort(b, b + m);

    long long i(0), j(0);
    while(i < n && j < m){
        if(b[j] - k <= a[i] && a[i] <= b[j] + k){
            num++;
            j++;
            i++;
        }else if(b[j] + k < a[i]){
            j++;
        }else if(a[i] < b[j] - k){
            i++;
        }
    }
    cout << num;
    return 0;
}
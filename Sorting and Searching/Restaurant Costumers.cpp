#include <bits/stdc++.h>
#define fmax 1000006
using namespace std;
 
long long n, a, b;
map<long long, long long> m;
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    long long t(0), p(1e9);
    while(n--){
        cin >> a >> b;
        m[a] ++;
        m[b] --;
    }
    
    long long num = 0, _max = -1e9;
    
    for(auto x:m){
      num += x.second;
      _max = max(num, _max);
    }
    
    cout << _max;
    return 0;
}
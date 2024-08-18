#include <bits/stdc++.h>
using namespace std;

long long n, x, tmp, num(0);
multiset<long long> ms;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> x;
    for(long long i = 0; i < n; i++){
        cin >> tmp;
        ms.insert(tmp);
    }
    
    auto p = ms.end();
    while(p != ms.begin()){
        auto p1 = ms.begin();
        p = ms.upper_bound(x  - * p1);
        if(p == p1) break;
        -- p;
        if(p != p1){
            ms.erase(p);
            ms.erase(p1);
            num++;
        }
    }
    
    cout << num + ms.size();
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

multiset<long long> ms;
unsigned long long n, tmp, cost(1e9), averageNum(0);

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(long long i = 0; i < n; i++){
        cin >> tmp;
        averageNum += tmp;
        ms.insert(tmp);
    }
    averageNum = floor(averageNum / n);

    for(auto x : ms)
        cost += abs(x - averageNum);
    
    cout << cost;
    return 0;
}   
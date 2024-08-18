#include <iostream>
#include <set>
using namespace std;

long long n, tmp;
multiset<long long> ms;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    while(n--){
        cin >> tmp;
        ms.insert(tmp);
        auto p = ms.upper_bound(tmp);
        if(ms.end() != p){
            ms.erase(p);
        }
    }
    cout << ms.size();
    return 0;
}
#include <iostream>
#include <set>
using namespace std;

long long n, tmp;
set<long long> list;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    while(n--){
        cin >> tmp;
        list.insert(tmp);
    }
    cout << list.size();
    return 0;
}
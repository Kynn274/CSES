#include <iostream>
#include <vector>
#define arrMax 1000000
using namespace std;

long long t, _max = -1e9;
vector<long long> arr(arrMax, 1);

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    cin >> t;
    vector<long long> a(t);
    for(long long i = 0; i < t; i++){
        cin >> a[i];
        _max = max(a[i], _max);
    }

    arr[0] = 0;
    arr[1] = 0;
    for(long long i = 2; i <= _max; i++){
        if(arr[i] == 1){
            for(long long i = 2; )
        }
    }

    return 0;
}
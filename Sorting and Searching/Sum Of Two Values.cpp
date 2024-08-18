#include <iostream>
#include <map>
using namespace std;

long long x, n, tmp;
map<long long, long long> m;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    cin >> n >> x;
    for(long long i = 0; i < n; i++){
        cin >> tmp;
        if(m[x - tmp] != 0){
            cout << m[x - tmp] << ' ' << i + 1;
            return 0;
        }else{
            m[tmp] = i + 1;
        }
    }
    cout << "IMPOSSIBLE";
    return 0;
}
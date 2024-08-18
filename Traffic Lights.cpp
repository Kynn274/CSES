#include <iostream>
#include <set>
#include <cmath>
using namespace std;
 
long long x, n, tmp;
set<long long> location;
multiset<long long> dis;
 
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> x >> n;
    location.insert(0); 
    location.insert(x);
    dis.insert(x);
    for(long long i = 0; i < n; i++){
        cin >> tmp;
        location.insert(tmp);
        auto p = location.find(tmp);
        auto lastp = p;
        auto nextp = p;
        --lastp;
        ++nextp;
        
        //cout << * lastp << ' ' << * nextp << ' ' << *p << '\n';
        dis.insert(abs(* p - * lastp));
        dis.insert(abs(* p - * nextp));
        auto m = dis.find(abs(* p - * lastp) + abs(* p - * nextp));
        dis.erase(m);
  
        cout << * --dis.end() << '\n';
    }
    return 0;
}

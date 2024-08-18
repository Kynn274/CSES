#include <iostream>
#include <set>
#include <vector>
using namespace std;

multiset<long long> tickets;
vector<long long> customers;
long long m, n, x;

int main(){
    cin >> m >> n;
    for(long long i = 0; i < m; i++){
        cin >> x;
        tickets.insert(x);
    }
    for(long long i = 0; i < n; i++){
        cin >> x;
        customers.push_back(x);
    }

    for(long long i = 0; i < n; i++){
        auto tmp = tickets.upper_bound(customers[i]);
        if(tmp == tickets.begin()) cout << -1 << '\n';
        else{
            cout << * (--tmp) << '\n';
            tickets.erase(tmp);
        }
    }
}
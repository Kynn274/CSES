#include <bits/stdc++.h>
#define fmax 1000006
using namespace std;

long long n, tmp, num(1);
map<long long, long long> m;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(long long i = 1; i <= n; i++) {
      cin >> tmp;
      m[tmp] = i;
    }
    
    for(long long i = 1; i <= n; i++)
      if(m[i] < m[i - 1]) num++;

    cout << num;
    return 0;
}
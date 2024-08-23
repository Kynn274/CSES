#include <bits/stdc++.h>
using namespace std;

long long n, tmp, len(0), maxlen(0), startpoint(1);
map <long long, long long> m;

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n;
    for(long long i = 1; i <= n; i++){
        cin >> tmp;
        
        if(m[tmp] != 0){
          startpoint = max(m[tmp] + 1, startpoint);
          len = i - startpoint + 1;
          m[tmp] = i;
        }
        else{
            m[tmp] = i;
            len += 1;
        }
        maxlen = max(maxlen, len);
    }
    
    cout << maxlen;
    return 0;
}
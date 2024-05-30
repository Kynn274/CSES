#include <bits/stdc++.h>
using namespace std;

unsigned long long a, b;
unsigned long long icount(0);

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> a >> b;
    string s;
    for(long long i = a; i <= b; i++){
        s = to_string(i);
        icount++;
        for(long long j = 0; j < s.size() - 1; j++)
            if(s[j] == s[j + 1]){
                icount--;
                break;
            }
    }
    cout << icount;
    return 0;
}

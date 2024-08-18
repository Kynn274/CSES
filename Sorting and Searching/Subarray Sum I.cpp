#include <iostream>
#defind fmax 1000006
using namespace std;

long long f[fmax], ans[fmax];
long long x, n, num(0);

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    memset(ans, 0, sizeof ans);
    cin >> n >> x;
    for(long long i = 0; i < n; i++) cin >> f[i];
    long long i(0), j(0);
    while(j < n){
        if(ans[j] < x){
            ans[j] = f[j] + a[j - 1];
            j++;
        }else{
            if(ans[j] == x){
                num += 1;
            }
            if(i == j){
                ans[j] = 0;
                i = ++j;
            }else{
                ans[j] -= f[i];
                i++;
            }
        } 
    }
    cout << num;
    return 0;
}
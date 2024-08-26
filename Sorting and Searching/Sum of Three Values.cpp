#include <bits/stdc++.h>
using namespace std;

long long n, x;

struct num{
  long long pos, value;
};
vector<num> a;
vector<long long> ans;

long long binarySearch(long long l, long long r, long long requiredValue){
    if(l > r) return -1;
    else{
        long long mid = (l + r) / 2;
        if(a[mid].value == requiredValue) return mid;
        if(a[mid].value > requiredValue) return binarySearch(l, mid - 1, requiredValue);
        if(a[mid].value < requiredValue) return binarySearch(mid + 1, r, requiredValue);
    }
}

bool compare(num a, num b){return a.value < b.value;}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    cin >> n >> x;
    a.resize(n);
    
    for(long long i = 0; i < n; i++){
      cin >> a[i].value;
      a[i].pos = i + 1;
    }
    
    sort(a.begin(), a.end(), compare);
    //for(auto p : a) cout << p.pos << ' ';
    
    cout << '\n';
    
    for(long long i = 0; i < n; i++){
        for(long long j = i + 1; j < n; j++){
            long long pos = binarySearch(j + 1, n - 1, x - a[i].value - a[j].value);
            if(pos != -1){
                ans.push_back(a[i].pos);
                ans.push_back(a[j].pos);
                ans.push_back(a[pos].pos);
                sort(ans.begin(), ans.end());
                for(auto p : ans) cout << p << ' ';
                return 0;
            }
        }
    }
    
    cout << "IMPOSSIBLE";

    return 0;
}
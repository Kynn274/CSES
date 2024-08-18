#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

struct movie{
  long long start, end;
};

long long n, e(0), num(0);
vector<movie> v;

bool compare(movie movie1, movie movie2){
  return movie1.end < movie2.end;
}

int main(){
  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
  movie tmp;
  cin >> n;
  for(long long i = 0; i < n; i++){
    cin >> tmp.start >> tmp.end;
    v.push_back(tmp);
  }
  
  sort(v.begin(), v.end(), compare);
  
  for(long long i = 0; i < v.size(); i++){
    if(v[i].start >= e){
      num += 1;
      e = v[i].end;
    }
  }
  
  cout << num;
  return 0;
}
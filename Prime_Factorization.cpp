#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;
#define ll long long
vector<ll> primefactors(ll n){
  vector<ll>ans ;
  for(int i =2 ;i*i<=n;++i){
    while(n%i==0){
      ans.push_back(i);
      n=n/i;
    }
  }
  if(n>1){
    ans.push_back(n);
  }
  return ans ;
}
int main(){
    ll n;
    cin>>n;
    vector<ll>ans = primefactors(n);
    for(int i =0 ;i<ans.size();i++){
      cout<<ans[i]<<" ";
    }
}

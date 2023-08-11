#include<bits/stdc++.h>
using namespace std;
int main(){
  int x = 225 ;
  double mid , hi = x , lo = 1 ;
  double ans ;
  while(hi-lo>=1e-9){
    mid = lo+(hi-lo)/2.0000;
    if((mid*mid)<=1e-9){
      ans = mid ;
      break;
    }else if(mid*mid>x){
      hi = mid-1e-9 ;
    }else{
      lo = mid+1e-9 ;
      ans =mid ;
    }
  }
  cout<<ans;
}

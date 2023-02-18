 #include<bits/stdc++.h>
using namespace std;
vector<bool>prime(501, true);
int main(){
    prime[0]=prime[1]=false ;
    for(int i = 2 ; i<=500 ; ++i){
        if(prime[i]==true){
            for(int j =2*i;j<=500 ; j+=i){
                prime[j]=false;
            }
        }
    }
    for(int i=0;i<prime.size();i++){
        if(prime[i]==1){
            cout<<i<<" ";
        }
    }
}

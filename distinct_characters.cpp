#include<bits/stdc++.h>
using namespace std;
int main(){
    string x="ababccde";
    int j =0 ;
    int count=0 ;
    for(int i =0 ;i<x.size();i++){
        j=i+1;
        while(j<x.size()){
            cout<<x[i]<<" "<<x[j]<<endl;
            if(x[i]==x[j]){
                count--;
            }
            j++;
        }
        count++ ;
    }
    cout<<count;
}

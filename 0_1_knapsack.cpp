#include<bits/stdc++.h>
using namespace std;

int main(){
    int iteam_number , max_waight ;
    iteam_number = 4 ;
    max_waight = 5 ;
    int wt[]={2,3,4,5};
    int val[]={3,4,5,6};
    int b[iteam_number+1][max_waight+1];
    for(int i =0 ; i<max_waight ;i++){
        b[0][i]= 0 ;
    }
    for(int i =0 ;i<iteam_number ;i++){
        b[i][0]=0;
    }
    for(int i =1 ; i<iteam_number ;i++){
        for(int w = 1 ; w<=max_waight ;w++){
            if(wt[i-1]>w){
                b[i][w]=b[i-1][w];
            }else if(wt[i-1]<=w){
                if((val[i-1]+b[i-1][w-wt[i-1]])>=b[i-1][w]){
                     b[i][w]=val[i-1]+b[i-1][w-wt[i-1]];
                }else{
                    b[i][w]=b[i-1][w];
                }
               
            }
        }
    }
   for(int i =0 ;i<iteam_number;i++){
    for(int j =0 ;j<=max_waight;j++){
        cout<<b[i][j]<<" ";
    }
    cout<<endl;
   }
   cout<<endl<<b[iteam_number-1][max_waight];


}

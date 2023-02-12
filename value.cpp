//Compare & shifting Count For Selection Sort 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int size = 10 ;
    int shift = 0 ,comp=0 ;
    int arr[]={33,66,22,99,77,11,91,55,88,44}; ;
    int min ,temp ;
    for(int i =0 ;i <size-1 ;i++){
        min = i ;
        for(int j =i +1;j<size;j++){
            comp++ ;
            if(arr[min]>arr[j]){
                min = j ;
                
            }
        }
        if(i!=min){
            shift++;
        }
        temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
        
    }
    for(int i =0 ;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<shift<<" "<<comp ;

}
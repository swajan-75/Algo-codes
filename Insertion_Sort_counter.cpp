
#include<iostream>
 using namespace std; 
 void InsertionSort(int arr[],int n){
     int startingIndex , elementOnHand , currentIndex  ;
     int shift =0  , comapare=0 , k =0;
     for(startingIndex = 1 ; startingIndex <n ;startingIndex++){
         elementOnHand = arr[startingIndex];
         currentIndex = startingIndex -1 ;
        if(arr[currentIndex]<elementOnHand){
             k++;
             //comapare++ ;
        }
         comapare++ ;//n-1n
         while(currentIndex>=0 && arr[currentIndex]>elementOnHand){
             arr[currentIndex+1]=arr[currentIndex];
             currentIndex = currentIndex-1 ;
             shift++ ;
             comapare++ ;


         }
         arr[currentIndex+1]=elementOnHand ;
         //int arr[]={33,66,22,99,77,11,91,55,88,44};cout<<k<<" ";
         //k =0 ;
     }
     for(int i =0 ;i <n;i++){
         cout<<arr[i]<<" ";
     }
     cout<<endl<<shift<<" "<<comapare-k;
 }
 int main(){
     int arr[]={10,9,8,7,6,5,4,3,2,1};
     //int arr[]={33,66,22,99,77,11,91,55,88,44};
     InsertionSort(arr ,(sizeof(arr)/sizeof(arr[0])));

 }

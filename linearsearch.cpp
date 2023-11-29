#include<iostream>
using namespace std;
int search (int arr[], int key,int size);
int s (int arr[], int key,int size);
int main(){
    
int arr []={ 2,3,4,5,6,7,8,9,10,12,14,16,80};
    int size=sizeof(arr)/sizeof(arr[0]);

    for (int i=0 ; i<size; i++){
        cout<<arr[i]<<". ";
    }
     int key;
     cin>>key;
     cout<<(search (arr,key,size));
     cout<<endl<< s(arr,9,size); 

    return 0;
}
int s(int arr[], int key,int size){
    
    for (int i =0; i< size; i++){
        if (arr[i]==key)return i;
    }
    return -1; 
}
int search (int arr[], int key,int size){

    
    int left=0, right=size-1;
    while (left<=right){
        int mid = left+(right - left)/2;
        if (arr[mid]==key)return mid;
        if (arr[mid]<key) left=mid+1;
        else right =mid-1;


    }



    return -1;
}
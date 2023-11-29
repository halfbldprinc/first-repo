#include <iostream>
 using namespace std;
 int main(){
    int arr []={2,3,5,2,5,24,25,6,25,2};
    int size = sizeof (arr)/sizeof(arr[0]);
      bool flag =true;
      for (int i=0; i<size-1; i++){
        if (!flag) break;
        flag = false;
            for (int j=0; j<size-1-i;j++){

                if (arr[j]>arr[j+1]){
                        int temp =arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
                        flag=true;                }

            }
      }
for (int i =0; i<size; i++){
    cout<<arr[i]<<", ";
}


for (int i=0; i<size-1; i++){

    for (int j=i; j<size;j++){
        if (arr[i]<arr[j]){
            int temp =arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
        }
    }
}

cout<<endl;
for (int i =0; i<size; i++){
    cout<<arr[i]<<", ";
}




    return 0; 
 }

 int binar (int arr[], int left, int right, int key){
        int mid = left +(right -left)/2;
    while (left<=right){
        if (arr[mid]==key)return mid;
        if (arr[mid]<key) left=mid+1;
        else right= mid-1;

    }
    return -1;
 }
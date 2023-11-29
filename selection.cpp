#include <iostream>
 using namespace std;
 int main (){
    

    int arr []={ 2,34,5,6,7,8,234,5,6234,3};
    int size=sizeof(arr)/sizeof(arr[0]);


    for (int i=0 ; i<size; i++){
        cout<<arr[i]<<". ";
    }
    for (int i=0; i<size-1; i++){

            for (int j=i;j<size; j++){

                    if (arr[i]>arr[j]){
                        int temp=arr[j];
                        arr[j]=arr[i];
                        arr[i]=temp;
                    }


            }




    }
    cout<<endl;
     for (int i=0 ; i<size; i++){
        cout<<arr[i]<<". ";
    }
    return 0;
 }
#include<iostream>
using namespace std;

int main(){
     
    int arr[] = {2,4,6,8,10};
    int size = 5;

    int prefixSum[size];
    prefixSum[0] = arr[0];
   
   
    for(int i=1; i<size; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i];
    }
    
    for(int i=0; i<size; i++){
        cout<<prefixSum[i]<<" ";
    }
    return 0;
}


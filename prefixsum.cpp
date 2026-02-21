#include<iostream>
using namespace std;

int main(){
     
    int arr[] = {2,4,6,8,10};
    int n = 5;

    int prefixSum[n];
    prefixSum[0] = arr[0];
   
   
    for(int i=1; i<n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i]; //prefix formula
    }
    
    for(int i=0; i<n; i++){
        cout<<prefixSum[i]<<" ";
    }
    return 0;
}


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    vector<int> prefixSum(n);
    prefixSum[0] = arr[0];
   
    for(int i=1; i<n; i++){
        prefixSum[i] = prefixSum[i-1] + arr[i]; //prefix formula
    }
    int q;
    cin >> q;
   
    while(q--){
        int l, r;
        cin >> l >> r;
       
        if (l == 0){
         cout << prefixSum[r] << endl;
        } else {
         cout << prefixSum[r] - prefixSum[l-1] << endl; 
        }
        return 0;
    }

}
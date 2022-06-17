#include <bits/stdc++.h>
using namespace std;

//Brute Force Way
int maxSum(int arr[], int size, int k){
    int maxSum = 0;
    for(int i=0 ; i<size-k ; i++){
        int windowSum = 0;
        for(int j=i ; j<i+k; j++){
            windowSum += arr[j];
        }
        maxSum = max(maxSum, windowSum);
    }
    return maxSum;
}

int main(){
    int arr[] = {1, 9, -1, -2, 7, 3, -1, 2};
    int size = sizeof(arr)/sizeof(*arr);
    int k = 4;
    
    int maxsum_ = maxSum(arr, size , k);
    cout << "Maximum Sub-Array: " << maxsum_;
    return 0;
}
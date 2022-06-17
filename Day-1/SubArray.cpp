#include <bits/stdc++.h>
using namespace std;

//Sliding Window Algorithm - O(N)
int maxSum(int arr[], int size, int k){
    int windowSum = 0, maxSum = 0;
    //Time Complexity - O(n)
    for(int i=0 ; i<k ; i++){
        windowSum += arr[i];
    }

    //Time Complexity - O(K)
    for(int i=k ; i<size; i++){
        windowSum += arr[i] - arr[i-k];
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
#include <bits/stdc++.h> 

int largestElement(vector<int> &arr, int n) {
    // Write your code here.
//BRUTE FORCE
// TC O(NLOGN)
  /*  if(arr.size()==0){
        return -1;
    }
    sort(arr.begin(),arr.end());
   
    return arr[n-1];*/
    // OPTIMAL TC O(N^2)
    int largest=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }
  return largest;
}

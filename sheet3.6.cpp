vector<int> rotateArray(vector<int>arr, int k) {
    vector<int>temp(arr.size());
     int n=arr.size();
     for(int i=0;i<n;i++){
    temp[(n-k+i)%n]=arr[i];
    }
     // copy temp  into num
     arr=temp;
     return arr;
}

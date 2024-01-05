vector<int> moveZeros(int n, vector<int> a) {
    // Write your code here.
    //TC  O(N) SC(N)
   /*
   vector<int>ans;
   int zeroes=0;
    for(int i=0;i<n;i++){
     if(a[i]==0){
         zeroes++;
     }
     else {
         ans.push_back(a[i]);
     }
    }
  int m=ans.size();
  for(int i=m;i<n;i++){
      ans.push_back(0);
  }
   return ans;*/

   //TC O(N)
   /*
  int cnt=0;
  int index=0;
  for(int i=0;i<n;i++){
      if(a[i]==0){
          cnt++;
          index=i;
      }
      else{
          if(cnt>=1){
              a[index-cnt+1]=a[i];
              a[i]=0;
              cnt--;
              i--;
          }
      }
  }

  return a;*/
  
  // same complexity but simple sol
   int i=0;
        for(int j=0;j<n;j++){
            if(a[j]!=0){
            swap(a[j],a[i]);
            i++;
            }
        }
        return a;
}

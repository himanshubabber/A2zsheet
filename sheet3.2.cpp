#include<algorithm>
#include<vector>
vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    //BRUTE FORCE O(NLOGN)
   /* sort(a.begin(),a.end());
    return {a[n - 2], a[1]};*/

    //OPTIMAL SOL
      int i=0;
      int sl=INT_MIN;
      int largest=a[i];
      int ss=INT_MAX;
      int smallest=a[i];
      for(int i=0;i<n;i++){

       if(a[i]>largest){
           sl=largest;
           largest=a[i];
       }
       else if(a[i]<largest&&a[i]>sl){
           sl=a[i];
       }
       if(a[i]<smallest){
           ss=smallest;
           smallest=a[i];
       }
       else if(a[i]>smallest && a[i]<ss){
           ss=a[i];
       }



      }
      return {sl,ss};
}

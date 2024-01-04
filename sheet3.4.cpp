int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	//TC O(N)
      int i=0;
	  int length=0;
	  while(i<n){
      if(arr[i]!=arr[i+1]){
         length++;
		 i++;
	  }
       else{
		   i++;
	   }

	  }

return length;




}

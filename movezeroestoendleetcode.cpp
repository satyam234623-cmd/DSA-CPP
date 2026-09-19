class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=1;j<n;j++){
                if(arr[j-1]==0){
                    swap(arr[j],arr[j-1]);
                }
            }
        }
     
        
        
    }
};

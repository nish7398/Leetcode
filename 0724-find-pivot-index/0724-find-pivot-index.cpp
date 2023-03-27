class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int ls=0;  // initialize left sum 
        int rs=0; // initialize right sum
        int ps=0; // pivoted sum
        
        // traverse the arr
        
        for(int i=0;i<n;i++){
            ps += nums[i];
        }
        
        rs=ps;
        
        /*traverse the array to get left side sum 
        and will subtract from rs each index value*/
    
        for(int i=0;i<n;i++){
            ls +=nums[i];
            
            if(ls==rs){
                return i;
            }
            rs -= nums[i];
        }
        return -1;
        
    }
};
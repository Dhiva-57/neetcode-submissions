class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        int len=0;
        for(int i=0;i<n;i++){
            int current=nums[i];
            int count=1;
          
          while(true){
            bool found = false;
           
            for(int j=0;j<n;j++){
             
             if(nums[j]==current+1){
                found=true;
                 count++;
                 current++;
                 break;
                }
             }
            
             if(!found) break;
           }
           len=max(len,count);
            }
            
            return len;
        }
    };

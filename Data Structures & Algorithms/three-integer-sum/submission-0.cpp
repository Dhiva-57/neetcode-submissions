class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int a,b,c;
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if (i > 0 && nums[i] == nums[i-1]) continue;
            a=nums[i];
            for(int j=i+1;j<nums.size();j++){
                if (j > i + 1 && nums[j] == nums[j-1]) continue;
                for(int k=j+1;k<nums.size();k++){
                    if (k > j + 1 && nums[k] == nums[k-1]) continue;
                    vector<int> temp;
                    if(i!=j && i!=k && j!=k){
                        if(nums[i]+nums[j]+nums[k]==0){
                            temp.push_back(nums[i]);
                            temp.push_back(nums[j]);
                            temp.push_back(nums[k]);
                            ans.push_back(temp);                        }
                    }
                    temp.clear();
                }
            }
        }
        return ans;
    }
};
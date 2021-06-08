class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr(2);
        map<int,int> Map;
        
        for(int i=0;i<nums.size();i++){
            Map[nums[i]] = i;
        }
        
        for(int i=0;i<nums.size();i++){
            int comp = target-nums[i];
            
            if(Map[comp] && Map[comp] !=i){
                arr[0] = i;
                arr[1] = Map[comp];
            }
        }
        return arr;
    }
};

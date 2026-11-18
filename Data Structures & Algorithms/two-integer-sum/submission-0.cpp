class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        unordered_map<int,int> amap;
        vector<int> answer;
        int diff;
        for(int i=0;i<nums.size();i++){
            diff=target-nums[i];

            if(amap.find(diff)!=amap.end()){
                answer.push_back(amap[diff]);
                answer.push_back(i);
                break;
            }
            else
                amap[nums[i]]=i;
        }

        return answer;
    }
};

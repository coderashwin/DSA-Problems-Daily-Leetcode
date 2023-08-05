class Solution {

private:

    void solve(vector<int> &nums, int i, int &numsSize, vector<vector<int>> &answer){
    if(i == numsSize){
        answer.push_back(nums);
    }
    for(int j = i; j < numsSize; j++){
        swap(nums[i], nums[j]);
        solve(nums, i+1, numsSize, answer);
        swap(nums[i], nums[j]);
    }
}
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
    vector<vector<int>> answer;
    int numsSize = nums.size();
    solve(nums, 0, numsSize, answer);
    return answer;

    }
};

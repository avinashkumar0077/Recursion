class Solution {
public:
    void solve(vector<int>& nums,vector<int>& path,vector<vector<int>>& ans,vector<bool>& used){
        if(path.size()==nums.size()){
            ans.push_back(path);
            return;
        }
        for(int i=0;i<nums.size();i++){
             if(used[i]==true){
                continue;
             }
             if(i > 0 &&
   nums[i] == nums[i - 1] &&
   used[i - 1] == false) {
    continue;
}
             used[i]=true;
             path.push_back(nums[i]);
             
             solve(nums,path,ans,used);
             path.pop_back();
             used[i]=false;
        }
    }

    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<int>path;
        vector<vector<int>>ans;
        vector<bool>used(nums.size(),false);
        sort(nums.begin(),nums.end());
        solve(nums,path,ans,used);
        return ans;
    }
};
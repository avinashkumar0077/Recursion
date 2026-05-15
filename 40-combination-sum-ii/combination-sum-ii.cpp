class Solution {
public:
    void solve(int start,vector<int>&candidates,vector<int>&path,vector<vector<int>>&ans,int target,int sum){
      if(sum == target){
        ans.push_back(path);
        return;
      }
      if(sum > target){
        return;
      }
      for(int i = start;i<candidates.size();i++){
        if(i>start && candidates[i] == candidates[i-1]){
            continue;
        }
        path.push_back(candidates[i]);
         solve(i + 1,
                  candidates,
                  path,
                  ans,
                  target,
                  sum + candidates[i]);
                   path.pop_back();

      }
              }
    

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      vector<vector<int>> ans;

        vector<int> path;

        sort(candidates.begin(), candidates.end());

        solve(0,
              candidates,
              path,
              ans,
              target,
              0);

        return ans;
    }
};
class Solution {
public:

    vector<int> buildRow(int row) {

        // Base case
        if(row == 0) {
            return {1};
        }

        // Recursive call
        vector<int> prev = buildRow(row - 1);

        vector<int> curr(row + 1, 1);

        // Fill middle elements
        for(int i = 1; i < row; i++) {
            curr[i] = prev[i - 1] + prev[i];
        }

        return curr;
    }

    vector<vector<int>> generate(int numRows) {

        vector<vector<int>> ans;

        for(int i = 0; i < numRows; i++) {
            ans.push_back(buildRow(i));
        }

        return ans;
    }
};
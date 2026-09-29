class Solution {
public:
    vector<int> orArray(vector<int>& A) {
        vector<int> ans;

        for (int i = 0; i < A.size() - 1; i++) {
            ans.push_back(A[i] | A[i + 1]);
        }

        return ans;
    }
};
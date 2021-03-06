class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int res = arr[0];

        int maxEnding = arr[0];

        for(int i = 1; i < n; i++)
        {
            maxEnding = max(maxEnding + arr[i], arr[i]);

            res = max(maxEnding, res);
        }

        return res;
    }
};

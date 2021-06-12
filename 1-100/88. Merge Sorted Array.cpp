class Solution {
public:
    void merge(vector<int>& A, int m, vector<int>& B, int n) {
        int indexA = 0, indexB = 0;

            vector<int> temp;

            while(indexA < m && indexB < n)
            {
                if (A[indexA] > B[indexB]) temp.push_back(B[indexB++]);
                else temp.push_back(A[indexA++]);
            }

            for (int i = indexA; i < m;i++) temp.push_back(A[i]);
            for (int i = indexB; i < n;i++) temp.push_back(B[i]);

            for (int i = 0 ; i < temp.size(); i++) A[i] = temp[i];
        }
            
};

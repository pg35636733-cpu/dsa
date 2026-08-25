class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        int N=matrix.size(), M=matrix[0].size();
        int row_index , col_index, start=0, end=N*M-1,Mid;

        while(start<=end)
        {
            Mid=start+(end-start)/2;
            row_index=Mid/M;
            col_index=Mid%M;

            if(matrix[row_index][col_index]==target)
            return 1;
            else if(matrix[row_index][col_index]<target)
            start=Mid+1;
            else
            end=Mid-1;
        }

        return 0;
    }
};
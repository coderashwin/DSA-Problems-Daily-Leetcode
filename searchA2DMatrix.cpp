class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
    // Approach 1
    //    int m = matrix.size();
    //    int n = matrix[0].size(); 

    //     int row = 0, col = n-1;

    //     if(matrix[row][col] == target){
    //         return true;
    //     } 

    //     while(target > matrix[row][col] && row < m-1){
    //         row++;
    //     }

    //     while(target < matrix[row][col] && col > 0){
    //         col--;
    //     }

    //     if(matrix[row][col] == target){
    //         return true;
    //     }

    //     return false;

      
    // Approach 2
     int n = matrix.size(), m = matrix[0].size();
        int i = 0, j = m*n - 1;
        while(i<=j){
            int mid = (i + j)/2;
            int r = mid/m;
            int c = mid%m;
            if(matrix[r][c]==target)return true;
            if(matrix[r][c]>target){
                j = mid - 1;
            }
            else i = mid + 1;
        }
        return false;
    }
};

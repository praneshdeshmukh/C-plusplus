// Given an m x n matrix, return all elements of the matrix in spiral order.
// printing order :
//   1 -> 2 -> 3 
//             |
//   4 -> 5    6 
//   |         |
//   7 <- 8  <-9

// o/p : 1 2 3 6 9 8 7 4 5

// Example 1:
// Input: matrix = [
             // [1,2,3],
             // [4,5,6],
             // [7,8,9]
// ]

// Output: [1,2,3,6,9,8,7,4,5]

// Example 2:
// Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
// Output: [1,2,3,4,8,12,11,10,9,5,6,7]

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        // printing -
        // 1. starting row 
                // |
                // Three 3 will get repeated
                // |
        // 2. ending col
                // |
                // nine 9 will get repeated
                // |
        // 3. ending row
                // |
                // seven 7 will get repeated
                // |
        // 4. starting col
    // ---------------------------

        // starting row = 0   
        // ending col   = 2
        // ending row   = 2
        // starting col = 0


        int totalRows = matrix.size();
        int totalCols = matrix[0].size();
        int totalElements = totalRows * totalCols;
        vector<int>ans;

        int starting_row = 0;
        int ending_col = totalCols - 1;
        int ending_row = totalRows - 1;
        int starting_col = 0;

        int count = 0;
        while (count < totalElements) {

             // printing starting row  ----
            for(int i=starting_row ; i <=ending_col && count < totalElements ; i++) {
                                // going col wise
                ans.push_back(matrix[starting_row][i]);
                count++;
            }
            starting_row++;

            // printing ending col | 
            for(int i=starting_row ; i <=ending_row && count < totalElements ; i++) {
                              // going row wise
                ans.push_back(matrix[i][ending_col]);
                count++;
            }
            ending_col--;

            // printing ending row ----
            for(int i=ending_col ; i >=starting_col && count < totalElements ; i--) {
                                 // going col wise
                ans.push_back(matrix[ending_row][i]);
                count++;
            }
            ending_row--;

            // printing starting col |
            for(int i=ending_row ; i >=starting_row && count < totalElements ; i--) {
                                    // going row wise
                ans.push_back(matrix[i][starting_col]);
                count++;
            }
            starting_col++;
        }

        return ans;
    }
};

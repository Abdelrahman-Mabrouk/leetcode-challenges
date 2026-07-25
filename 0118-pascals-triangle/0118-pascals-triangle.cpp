class Solution {
public:
    vector<vector<int>> generate(int numRows) {
            vector<vector<int>> result(numRows);
    result[0].push_back(1);
    if(numRows == 1){
        return result;
    }
    result[1].push_back(1);
    result[1].push_back(1);
    if(numRows == 2){
        return result;
    }
    for (int i = 2, j; i < numRows; ++i) {
        result[i].push_back(1);
        for ( j = 1; j <i ; ++j) {
            result[i].push_back(result[i-1][j-1]+result[i-1][j]);
        }
        result[i].push_back(1);

    }
    return result;
    }
};
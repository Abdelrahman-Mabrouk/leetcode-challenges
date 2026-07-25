class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
            vector<pair<int, int>> pair;
    for (int i = 0; i < matrix.size(); ++i) {
        for (int j = 0; j < matrix[i].size(); ++j) {
            if (matrix[i][j] == 0) {
                pair.push_back(make_pair(i, j));
            }
        }
    }

    for (int k = 0; k < pair.size(); ++k) {
        int i = pair[k].first, j = pair[k].second;
        int x = 1, z = 1;
        while (x <= i) {
            matrix[i - x][j] = 0;
            x++;
        }
        while (z <= j) {
            matrix[i][j - z] = 0;
            z++;

        }
        x=1;
        while (x + i < matrix.size()) {
            matrix[i + x][j] = 0;
            x++;
        }
        z=1;
        while (z + j < matrix[0].size()) {
            matrix[i][j + z] = 0;
            z++;

        }


    }
    }
};
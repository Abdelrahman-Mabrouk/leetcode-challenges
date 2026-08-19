class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int res= 0;
        int size =citations.size();
        for (int i = size-1; i >=0; --i) {
            if( size-i  <= citations[i]){
                res = size-i;
            }
            else break;
        }

        return res;
    }
};

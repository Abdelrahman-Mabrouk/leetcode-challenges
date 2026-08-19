class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int size =citations.size();
        int res= 0,maxh= size,h=0;
        for (int i = 0; i < size; ++i) {
            if( citations[i] >=  size - i ){
              res =  size - i;
              break;
          }
        }

        return res;
    }
};

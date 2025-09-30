class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr(n);
       arr[0]=n*(1-n)/2;
       for(int i=1;i<n;i++){
        arr[i]=i;
       }
       return arr;
    }
};
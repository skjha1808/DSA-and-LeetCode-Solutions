class Solution {
public:
    int maxCount(vector<int>& banned, int n, int maxSum) {
        unordered_set<int> st;
        for(auto x:banned){
            st.insert(x);
        }

        int cnt=0, sum=0;
        for(int i=1;i<=n;i++){
            if(st.find(i)==st.end()){
                sum += i;

                if(sum <= maxSum){
                    cnt++;
                }
            }
        }
        return cnt;
    }
};
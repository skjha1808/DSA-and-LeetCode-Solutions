class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& a, int ec) {
        int n=a.size();
        vector<bool>t;
           int maxi=*max_element(a.begin(),a.end());
           for(int i=0;i<n;i++){
                 if(a[i]+ec>=maxi){
                    t.push_back(true);
                 }
                 else t.push_back(false);

           }
           return t;
    }
};
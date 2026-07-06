class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int n=fruits.size();
        int maxlen=0;
        int l=0, r=0;
        unordered_map<int,int> freq;
        while(r < n){
            freq[fruits[r]]++;

            while(freq.size() > 2){
                freq[fruits[l]]--;
                if(freq[fruits[l]]==0){
                    freq.erase(fruits[l]);
                }
                l++;
            }

            if(freq.size() <= 2){
                int len=r-l+1;
                maxlen=max(len,maxlen);
            }
            r++;
        }
        return maxlen;
    }
};
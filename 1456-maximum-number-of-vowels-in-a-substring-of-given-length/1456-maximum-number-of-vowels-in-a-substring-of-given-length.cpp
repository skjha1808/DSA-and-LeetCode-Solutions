class Solution {
    bool isVowel(char ch){
        return ch=='a' ||
                ch=='e' || 
                ch=='i' || 
                ch=='o' || 
                ch=='u';
    }
public:
    int maxVowels(string s, int k) {
        int n = s.size();
        int cnt = 0;
        for(int j=0;j<k;j++){
           if(isVowel(s[j]))
               cnt++;
        }
        int maxi = cnt;

        int left = 0, right = k-1;
        while(right < n-1){
            right++;
            
            if(isVowel(s[right])) cnt++;
            if(isVowel(s[left])) cnt--;
            maxi = max(maxi,cnt);
            left++;
        }
        return maxi;
    }
};
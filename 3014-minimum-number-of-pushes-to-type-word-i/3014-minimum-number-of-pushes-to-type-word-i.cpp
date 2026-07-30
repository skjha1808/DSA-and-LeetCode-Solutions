class Solution {
public:
    int minimumPushes(string word) {
        int n=word.size();
        int cnt=0;
        int minpush=0;
        for(int i=0;i<n;i++){
            if(cnt<=7){
                minpush += 1;
                cnt++;
            }
            else if(cnt>7 && cnt<=15){
                minpush += 2;
                cnt++;
            }
            else if(cnt>15 && cnt<=23){
                minpush += 3;
                cnt++;
            }
            else {
                minpush += 4;
                cnt++;
            }
        }
        return minpush;
    }
};
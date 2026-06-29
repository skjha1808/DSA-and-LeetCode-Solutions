class Solution {
public:
    int maximum69Number (int num) {
        vector<int> arr;
        while(num>0){
            int remainder = num%10;
            arr.push_back(remainder);
            num = num/10;
        }

        reverse(arr.begin(),arr.end());
        for(int i=0;i<arr.size();i++){
            if(arr[i]==6){
                arr[i]=9;
                break;
            }
        }

        int ans=0;
        for(int i=0;i<arr.size();i++){
            ans = ans*10 + arr[i];
        }
        return ans;
    }
};
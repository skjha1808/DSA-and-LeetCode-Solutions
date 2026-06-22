class Solution {
public:
    bool checkPerfectNumber(int num) {
        if(num==1) return false;
        int sum=1;
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                sum += i;

                // avoid adding sqrt twice
                if(i != num/i)
                sum += num/i;
            }
        }
        if(sum==num) return true;
        return false;
    }
};
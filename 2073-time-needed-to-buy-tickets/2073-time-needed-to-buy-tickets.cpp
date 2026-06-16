class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        for(int i=0;i<tickets.size();i++){
            q.push(i);   
        }
        int cnt=0;
        while(tickets[k]>0){
            int p=q.front();
            q.pop();
            tickets[p]--;
            cnt++;
            if(tickets[p]!=0){
                q.push(p);
            }
        }
        return cnt;
    }
};
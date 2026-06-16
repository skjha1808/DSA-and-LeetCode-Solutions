class Solution {
public:
    int countStudents(vector<int>& stu, vector<int>& sw) {
        queue<int> q;
        for(int i:stu){
            q.push(i);
        }
        int n=stu.size();
        int cnt=0;
        for(int i=0;i<n*n && !q.empty();i++){
            int stud=q.front();
            q.pop();
            int sand=sw[cnt];
            if(stud==sand){
                cnt++;
            }
            else {
                q.push(stud);
            }
        }
        return n-cnt;
    }
};
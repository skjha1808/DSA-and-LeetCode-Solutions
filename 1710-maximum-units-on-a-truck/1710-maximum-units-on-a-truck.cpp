class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {

        sort(boxTypes.begin(), boxTypes.end(), [](auto &a, auto &b){
            return a[1] > b[1];
        });

        int maxi=0;
        for(int i=0;i<boxTypes.size();i++){
            int numberOfBoxes = boxTypes[i][0];
            int unitsPerBox = boxTypes[i][1];

            int take = min(numberOfBoxes, truckSize);
            maxi += take * unitsPerBox;
            truckSize -= take;

            if(truckSize==0) break;
        }
        return maxi;
    }
};
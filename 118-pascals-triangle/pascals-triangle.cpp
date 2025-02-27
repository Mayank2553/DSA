class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        if(n==0){
            return ans;
        }
        if(n==1){
            vector<int> temp;
            temp.push_back(1);
            ans.push_back(temp);
            return ans;
        }

        ans = generate(n-1);
        vector<int> prev = ans[n-2];
        vector<int> curr;
        curr.push_back(1);

        for(int i=1; i<n-1; i++){
            curr.push_back(prev[i]+prev[i-1]);
        }

        curr.push_back(1);
        ans.push_back(curr);
        return ans;

    }
};
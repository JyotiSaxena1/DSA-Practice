class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& a) {
        vector<bool> ans;
        int p=0;
        int n=a.size();
        for(int i=0;i<n;i++){
            p=((p*2)+a[i])%5;
            ans.push_back(p==0);
        }
        return ans;
    }
};
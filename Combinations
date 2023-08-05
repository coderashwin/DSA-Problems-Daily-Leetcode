class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
       vector<vector<int>> results;
        vector<int> result;
        if(n<=0||k<=0||n<k) return results;
        comb(n,k,results,result,1,0);
        return results; 
    }
    void comb(int n,int k,vector<vector<int>> &results,vector<int> &result,int start,int num){
        if(num==k){
            results.push_back(result);
            return;
        }
        for(int i=start;i<=n;i++){
            result.push_back(i);
            comb(n,k,results,result,i+1,num+1);
            result.pop_back();
        } 
    }
};

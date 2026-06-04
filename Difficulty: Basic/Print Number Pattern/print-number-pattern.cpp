class Solution {
  public:
    vector<int> printPat(int n) {
        std::vector<int> result;
        // write code here
        for(int i=1;i<=n;i++){
        for(int j=n;j>=1;j--){
            for(int k=1;k<=n-i+1;k++){
                result.push_back(j);
            }
        }
        result.push_back(-1);
        }
        
        return result;
    }
};
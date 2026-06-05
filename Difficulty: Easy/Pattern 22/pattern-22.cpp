class Solution {
  public:
    void printSquare(int n) {
        // code here
        for(int i =0;i<2*n-1;i++){
        for(int j =0;j<2*n-1;j++){
            
            int min_ij=min(i,j);
            int min_last=min(2*n-2-i,2*n-2-j);
            
            printf("%d ",n-min(min_ij,min_last));
        }
        printf("\n");
    }
    }
};
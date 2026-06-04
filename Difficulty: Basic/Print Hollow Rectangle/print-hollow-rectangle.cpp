class Solution {
  public:
    void printHollowRect(int n, int m) {
        // code here
        int i,j;
    for(int i=1;i<=n;i++){
        for(j=1;j<=m;j++){
            if(i==1 || i==n)
                printf("*");
            else{ 
                if(j==1 ||j==m)
                    printf("*");
                else
                    printf(" ");
            }
        }
        printf("\n");
    }
    }
};
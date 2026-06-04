class Solution {
  public:
    void printInvertedPyramid(int n) {
        // code here
        for (int i = 0; i < n; i++) {
        // As i increases (0, 1, 2...), the number of stars (n - i) decreases
        for (int j = 0; j < n - i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    }
};
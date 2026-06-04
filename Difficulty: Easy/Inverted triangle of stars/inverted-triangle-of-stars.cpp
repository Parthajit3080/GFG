#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    // code here
    for (int i = 1; i <= n; i++) {
        // 1. Print leading spaces
        for (int j = 1; j <= i - 1; j++) {
            printf(" ");
        }
        
        // 2. Print all stars for the row in a single loop
        // When i=1 and n=4, this runs up to (2*3 + 1) = 7 stars
        for (int j = 1; j <= 2 * (n - i) + 1; j++) {
            printf("*");
        }
        
        printf("\n");
    }

    return 0;
}
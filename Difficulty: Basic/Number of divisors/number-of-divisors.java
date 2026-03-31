// User function Template for Java
class Solution {
    static int countDivisors(int n) {
        // code here
        int c=0;
        for(int i=1;i<=n;i++){
            if(n%i==0 && i%3==0) c++;
        }
        return c;
    }
}
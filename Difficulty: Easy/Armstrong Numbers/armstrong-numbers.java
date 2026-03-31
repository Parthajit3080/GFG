// User function Template for Java
class Solution {
    static boolean armstrongNumber(int n) {
        // code here
        int x=n,sum=0,r;
        while(n!=0){
            r=n%10;
            sum=sum+r*r*r;
            n=n/10;
        }
        if(sum==x)
            return true;
        else 
            return false;
    }
}
class Solution {
    public void reverseArray(int arr[]) {
        // code here
        int sSize=arr.length;
        for(int i=0;i<sSize/2;i++){
            int t=arr[i];
            arr[i]=arr[sSize-i-1];
            arr[sSize-i-1]=t;
        }
    }
}
void printNos(int n) {
       // code here
    if(n==0) return;
    printNos(n-1);
    printf("%d ",n);
}

def pos(n):
    ## Write the code
    if n==0:
        print("already Zero")
    else:
        for i in range(n-1,-1,-1):
            a=str(i)+" "
            print(a,end="")
        
    
def neg(n):
    ##Write the code
    if n==0:
        print("already Zero")
    
    else:
        while n<=0:
            b=str(n)+" "
            print(b,end="")
            n+=1
            
            
    
    
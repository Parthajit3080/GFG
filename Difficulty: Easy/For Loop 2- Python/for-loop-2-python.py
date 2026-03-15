def stringJumper(s):
    l=len(s)
    for i in range(0,l,2):
        # from 0 to length of str and skip 2
        print(s[i], end="")
        #printing character and separating characters by nothing

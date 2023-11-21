
def expand_encoded_string(s):
    x = len(s)
    ss = ''
    for i in range(x):
        if(s[i] >= '0' and s[i] <= '9') : continue
        num = int(s[i + 1])
        ss += s[i] * num

    return ss

input_f1 = 'bill1.txt'
input_f2 = 'bill2.txt'


from collections import defaultdict

def bill_cal():

    bills = {}
    
    # bills = defaultdict(int)
    s = open(input_f1).readlines()
    # print(len(s))
    n = len(s)
    for i in range(n):
        name = ''
        price = 0
        tom = ''
        temp = 0

        for j in s[i]:
            if(j == '[' ) : temp = 1
            elif(temp == 1) :
                if(j == ']') : temp = 0
                else : name += j 
            
            elif(j == '$') : temp = 2
            elif(temp == 2) :  
                tom += j

        price = int(tom)
        # bills[name] += price
        
        try:
            bills[name] += price
        except KeyError:
            bills[name] = price

    
    # print(dict(bills))
    print(bills)
    
# call function here

bill_cal()
#print(expand_encoded_string(m1e2t1))


# m1e2t1
# B1o2k2e2p1e1r1!3
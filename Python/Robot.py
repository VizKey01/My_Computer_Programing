import math
def jnahee ():
    n = int(input())
    x = []
    d = 0
    temp = 0
    dx = 0
    Dx = 0
    dy = 0
    Dy = 0
    f = False

    dx, dy = [int(i) for i in input().split()]

    # x.append(input().split())

    for i in range(n-1):
        x.append([int(i) for i  in input().split()])

    lim = int(input())

    for i in range(n-1):
        temp = abs(dx - x[i][0]) + abs(dy - x[i][1])
        if(d + temp > lim):
            break    
        dx = x[i][0]
        dy = x[i][1]
        d += temp

    print(d)






def check_id(id):
    ck = False
    cnt = 0
    n = len(id)
    if(n != 10 or (id[8] != '2' or id[9] != '1')):
        # print("101")
        return True
    
    for i in id:
        i = int(i)
        if(i < 0 or i > 9):
            # print("102")
            return True
        if(cnt < 2 and i != 6):
            # print("103")
            return True
        if(cnt == 3 and i != 3):
            # print("104")
            return True
        
        cnt += 1

    return ck

def check_name(name):
    for i in name:
        if(i > 'Z' or i < 'A'):
            return True
    return False 

def check_date(day):
    cnt = 0
    for i in day:
        if(i == '/'):
            if(cnt < 2):
                return True        
            cnt = 0
            continue
        if(i < '0' or i > '9'):
            return True
        cnt += 1

    return False

def j_():
    n = int(input())
    for i in range(n):
        ans = []
        x = input().split()
        # N = x.size()
        if(check_id(x[0])):
            ans.append("ID")

        if(check_name(x[1])):
            ans.append("Name")

        if(check_name(x[2])):
            ans.append("Surname")

        if(check_date(x[3])):
            ans.append("DOB")

        if(ans == []): print("OK")
        else :
            for j in ans:
                print(j, end = " ")
        

# kuy j 
# jnahee()
j_()

'''
2
12345 j nahee 01/01/2000
32145 j loveyoyoh 01/01/2023

    5
    1 1
    1 5
    2 3
    4 5
    5 1
'''
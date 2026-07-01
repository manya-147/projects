import random

compnum = random.choice([-1, 0, 1])
usernum = int(input("Enter the no : "))
numdic = {-1 : "snake" , 0 : "water", 1 : "gun"}
num=numdic[usernum]
print(f"U choose {num} and computer choose {numdic[compnum]}")

if(compnum==num):
    print("DRAW")

else : 
    if(compnum==1 and usernum==-1) :
        print("U LOSE")
    elif(compnum==1 and usernum==0) :
        print("U WIN")
    elif(compnum==0 and usernum==-1) :
        print("U WIN")
    elif(compnum==0 and usernum==1) :
        print("U LOSE")
    elif(compnum==-1 and usernum==1) :
        print("U WIN")
    elif(compnum==-1 and usernum==0) :
        print("U LOSE")
    else :
        print("ERROR")

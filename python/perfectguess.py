import random
num = random.randint(1, 100)
a=0
guess=0
while(a!=num):
    a=int(input("Enter the no : "))
    guess+=1
    if(num<a):
        print("lower no pls")
    elif(num>a):
        print("higher no pls")

if(guess==1) :
    print("\nOMGG PERFECT GUESS")
print("\nCongratulations! You guessed the correct number.")
print(f"U took {guess} to guess no")
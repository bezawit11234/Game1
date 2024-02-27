import random as rd 
print("Number Guessing Game")             
for i in range(10):
   x=int(input("Guess the number from the range of 1 up to 10: "))
   y=rd.randint(1,10)
   print("random number: ",y)
   if x==y:
     print("WOW you got it Good job")
   else:
    print("OWW you missed it for abit, try again")
    if i is quit:
       exit()
       
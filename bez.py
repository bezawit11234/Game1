''''arr=[]
for i in range(int(input())):
   name=input()
   score=float(input())
   arr.append([score,name])
arr.sort()
for i in range(len(arr)):
         if arr[i][0]> arr[0][0]:
            print(arr[i][1])
            
            if i+1 >= len(arr) or arr[i+1][0] > arr[i][0]:
              
                break  #i don't understand that much so i will come back and solve it again, Don;t forget it bez  
nums=[]
for _ in range (int(input())):
  num=int(input())
  nums.append(num)
for i in range (len(nums)):
   pmr=0
   pmr=pmr+nums[i]
   print(pmr)
u=int(input("enter hours u use:"))
x=float(input("enter the rate that u wat:"))
print("you have to pay:", u*x)
print("123"+"abc")
x=0
if x == 6 :
    print('is 6')
    print('is still 6')
    print('third 6')
def thing():
    print("hello")
    print("fun")
thing()
print("zip")
thing()
def greet(lang):
    if lang=='es':
        print("hola")
    elif lang=='en':
       print("bonjour")
    else:
        print("hello")
greet('ed')
greet('en')
greet('es')
import random
for i in range(10):
    x=random.random()#in random it's a ,pdule which is select a rondom number start from 0.0 upto 1.0 which is not include 1.0, the output will differ if we run again and again 
    print(x)
y=random.randint(5,10)
print(y)
def repeat_lyrics():
    print_lyrics()
    print_lyrics()
def print_lyrics():
    print("go shawty it's ur birthday")
    print("we gonna party like it's your birthday")
repeat_lyrics()
def compute_pay(hrs,rate):
    x=hrs*rate+(1.5*rate)
    print(x)
y=float(input("enter the hrs"))
x=float(input("enter the rate"))
compute_pay(y,x)'''
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
'''print("the largest number")
for i in range(10):
     y=int(input("enter a number"))

for i in int(y):
    x=-1
    if i > x:
          x=i
    print(x)
zork=0
count=0
print("before count")
for thing in [1,2,3,3,3,4,5]:
    if thing  > 4:
          print("the largest value is:",thing)  
    zork=zork + thing
    count=count+1
    found= False
    if thing==3:
         found=True
         print(found)
         
    
print(zork/count)
largest=None
for i in [11,2,3,4,5]:
    if largest is None:
       largest=i
    elif i >largest:
      largest=i
print("the largest", largest )
zork=0
count=0
max=None
min=None
for i in range(int(input())):
  arr=input()
  zork=zork+i
  count=count+1
  try: 
     "done"
  except: 
     print("use a number only except done")
  if arr =='done':
    print(zork)
    print(count)
    print(zork/count)
  if max is None:
    max=i
  elif i>max:
    max=i  
    if min is None:
      min=i
    elif i<min:
      min=i
print("the maximun number is:",max)
print("the minimum number is:",min)
fruit="banana"
index=0
for i in fruit:
  if index < len(fruit):
    letter=fruit[index]
    index=index+1
    print(index,letter)
data="from stephen.maequard@uct.ac.za sat jan"
atpos=data.find('@')
print(atpos)
stops=data.find(' ',atpos)
print(stops)
host=data[atpos+1:stops]
str="X-DSPAM-confidence: 0.8475"
x=str.find(':')
print(x)
y=str[19:30]
x=float(y)
print(x)
text=" there are ,any challenges: 0.874563 to be in here so line of it is to be a good pythonista \n i want to be a back end developer"
ffile=open('test.txt',mode='w')
ffile.write(text)
ffile.close()
xfile=open('test.txt',mode='r')
for line in xfile:
    line=line.rstrip()
    line=line.upper()
    print(line)
    if  line.startswith('kind of'):
        print(line)
fname=input("enter the file name that you want: ")
count=0
try:
 fhand=open(fname, mode='r')
except:
   print("file isn't found",fname)
   exit()
for line in fhand:
    if not line.startswith(':'):
        continue
    count=count+1
print(line)'''




  
  






 



    


  
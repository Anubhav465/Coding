import random
import string
sample=list(string.ascii_letters) #all the possible alphabets
#print(sample)
commonchar=random.choice(sample) #m  =   choose a common character; thsi common character is always present in both l1 and l2...so that we can choose the common charecter from from both the list
sample.remove(commonchar) #removing the chosen sample from the list so that the random does not choose the same character agin and agai
#print(m)
#print(sample)
pos1=random.randint(0,4) #index number .like the list  ["a","b","c"] takes index number 0 the it prints a 
pos2=random.randint(0,4) #index number .like the list  ["a","b","c"] takes index number 0 the it prints a 
#print(pos1,pos2)
l1=[]
l2=[]
#print(l1,l1)
for i in range(0,5):
  if(i!=pos1 and i!=pos2):
    s=random.choice(sample)
    l1.append(s)
    sample.remove(s)
    s=random.choice(sample)
    l2.append(s)
    sample.remove(s)
    #print(l1)
    #print(l2)
  elif(i==pos1 and i==pos2):
    l1.append(commonchar)
    l2.append(commonchar)
  elif(i==pos1):
    l1.append(commonchar)
    s=random.choice(sample)
    l2.append(s)
    sample.remove(s)

  elif(i==pos2):
    l2.append(commonchar)
    s=random.choice(sample)
    l1.append(s)
    sample.remove(s) 

print(l1)
print(l2)

choice=input("enter a common alphabet")
if(choice==l1[pos1]):
  print("correct")
else:
  print("incorrect")





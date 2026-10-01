n=int(input("enter the list size"))
listt=[]
c=0
for i in range(n):
    my_marks=int(input(f"enter the{i}list ellment"))
    listt.append(my_marks)
print("",listt) 
for j in range(len(listt)):
    c=c+listt[j]   
print("the sum is ",c)    
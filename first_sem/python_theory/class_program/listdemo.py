n=0
listt=[]
c=0
while(n<=4):
  n=int(input("enter the size"))
  if n>=4 :
      for i in range(n):
       my_marks=int(input(f"enter the{i+1}list ellment"))
       listt.append(my_marks)


      print("",listt) 
      for j in range(len(listt)):
         c=c+listt[j]   
      print("the sum is ",c)
      break
  else:
     print("invalid list ")
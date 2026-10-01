unit=int(input("enter how many unit used"))
cateory=int(input("enter the type of cateory\n1=non comercial\n2=commercial"))
threshold=int(input("1=yes 0=no"))
amount=0
if unit<=100 and cateory==1:
    amount=unit*5
if unit<=100 and cateory==2:
    amount=unit*10       
if unit>100 and unit<=300 and cateory==1:
    amount=unit*6
if unit>=100 and unit<=300 and cateory==2:
    amount=unit*12
if unit>=300 and cateory==1:
    amount=unit*8
if unit>=300 and cateory==2:
    amount=unit*15

if threshold==1 and cateory==1:
    amount=amount+50
if threshold==1 and cateory==2:
    amount=amount+100
    
print("if u paid your bill with in this date ",amount-amount*10/100)      
print("if u paid your bill with in this date ",amount)      
#bankoperation list demo
def inpot():
    my_list=[]
    tup=()
    accountnumber=int(input("enter your act n umber"))
    pannum=int(input("enter the pan"))
    name=input("enter the name ")
    dob=input("enter ur dob")
    tup=(accountnumber,name,pannum,dob)
    my_list.append(tup)
    adress=input("enter ur adress")
    my_list.append(adress)
    email=input("enter ur email")
    my_list.append(email)
    mobli=int(input("enter ur number"))
    my_list.append(mobli)
    balance=500
    my_list.append(balance)
    my_list[4]=my_list[4]-100
    print("",my_list)
    return my_list
    
def display(my_list):
    print("your account number",my_list[0](0))
def withdraw(my_list):
    amount=int(input("enter the amount to deposite"))
    my_list[4]=my_list[4]-amount
    return my_list
def depo(my_list):
    amount=int(input("enter the amount to deposite"))
    my_list[4]=my_list[4]+amount
    return my_list
                

    


my_list=inpot()
a=0
while a==0:
    ch=int(input("enter your choice \n1=acount details\n2=withdraw\n3=deposite\n4-exit"))
    if ch==1:
        display(my_list)
    elif ch==2:
        withdraw(my_list)
        print("your balace is",my_list[4])    
    elif ch==3:
        depo(my_list)
        print("your balce is ",my_list[4])
    elif ch==4:
        a=1        




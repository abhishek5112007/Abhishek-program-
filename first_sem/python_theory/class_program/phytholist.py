#u need to process a single students data  is as followed name roll,mobli email, 5 subject marks and get the subject total
#implemented using nested    mylist 
def input_in(mylist):
    name=input("enter your name")
    mylist.append(name)
    roll=int(input("enter your roll"))
    mylist.append(roll)
    mobli=int(input("enter the number "))
    mylist.append(mobli)
    email=input("enter the email")
    mylist.append(email)
    return name,roll,mobli,email
def marks (ourlist):
    for i in range (5) :
        my_mark=int(input(f"enter your {i} subject mark"))
        ourlist.append(my_mark)
    return ourlist
def total(mark):
    tol=mark[0]+mark[1]+mark[2]+mark[3]+mark[4]
    return tol
def display(main):
    print("",main)
main=[]
n=int(input("enter number of students "))
for i in range(n):
    
    mylist=[]
    name,roll,mobli,email=input_in(mylist)
    ourlist=[]
    mark=marks(ourlist)
    mylist.append(mark)
    tol=total(mark)
    mylist.append(tol)
    main.append(mylist)
display(main) 

 
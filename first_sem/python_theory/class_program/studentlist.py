

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
def marks ():
        my_list=[]
        for i in range (5):
            my_mark=int(input(f"enter your {i} subject mark"))
            my_list.append(my_mark)
        return my_list
def total(my_marks):
        tol=my_marks[0]+my_marks[1]+my_marks[2]+my_marks[3]+my_marks[4]
        return tol
def display(mylist):
        print("",mylist)
slist=[]        
for i in range(2):
      mylist=[]
      name,roll,mobli,email=input_in(mylist)
      my_marks=marks()
      mylist.append(my_marks)
      tol=total(my_marks)
      mylist.append(tol)
      slist.append(mylist)
print("STUDENT LIST ",slist)


 
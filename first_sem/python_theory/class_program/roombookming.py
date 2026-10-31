booking_book={}
def inputt():
    booking={}
    roomnumber=int(input("enter the room number: " ))
    cutomer_name=input("enter the name ")
    contact_no=int(input("enter the contact number"))
    booking_amt=int(input("enter the amount"))
    gstt=booking_amt*0.18
    booking={"roomnumber":roomnumber,"customer_name":cutomer_name,"contact number":contact_no,"booking amount":booking_amt,"gstt":gstt}
    return booking
def cal_total():
        total=0
        for j in range(room_booked):
            total=total+booking_book[j]["booking amount"]
        return total     
def gst_total():
     gst=0
     for j in range(room_booked):
        gst=gst+booking_book[j]["gstt"]
     return gst
     
     
def display():
     total=cal_total()
     gst=gst_total() 
     print("\nnumber of room book=",room_booked)
     print("\nbooking amount total=",total)
     print("\ntotal gst callected=",gst)
     print("\ntotal erangings=",total+gst)
def details(roomno):
     for i in range(room_booked):
          if booking_book[i]["roomnumber"]==roomno:
               print("\nroomnumber",booking_book[i]["roomnumber"])
               print("\ncustomer_name:",booking_book[i]["customer_name"])
               print("\ncontact number:",booking_book[i]["contact number"])
               print("\nbooking amount:",booking_book[i]["booking amount"])
               print("\ngst:",booking_book[i]["gstt"])
               break
          else:
               print("room not booked")     
choice=0
room_booked=0
while choice!=4:
    choice=int(input("enter ur choice\n1:add\n2view today statment\n3=booking deatils\n4=exit"))
    if choice==1:
        booking=inputt()
        booking_book[room_booked]=booking
        room_booked=room_booked+1   
    if choice==2:
         display()
    if choice==3:
         roomno=int(input("enter the room number"))
         details(roomno)
    if choice==4:
         print("thankyou")

          
         

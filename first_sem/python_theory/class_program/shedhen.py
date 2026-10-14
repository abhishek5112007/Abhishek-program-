n=int(input("enter number of sheds"))
totalamount=0
totalegg=0
highest_egg=0
highest_shed=""
rj=0
for i in range(1,n+1):
    print("Shed",i)
    sn=input("enter the shed name")
    ne=int(input("enter number of egg collected"))
    avg=float(input("enter tghe wieght of the egg"))
    if avg>=60 :
        grade="LARGE"
        price=6.50
        status="no"
        amount=price*ne
    if avg>=50 and avg<=59.9:
        grade="MEDIUM"
        price=5.00
        status="no"
        amount=price*ne
    if avg>=45 and avg<=50:
        grade="small"
        price=3.50
        status="no"
        amount=price*ne
    if avg<=45:
         grade="small"
         price=3.50
         status="yes"
         amount=price*ne
        

    if ne>=500:
        print("-------hen-shed egg slip-----")
        print("shed nam:",sn)
        print("eggs collected",ne)
        print("avg weight(g)",avg)
        print("grade:",grade)
        print("valume discount:",amount/100*5,"(5 applied,egg>500)")
        discount=amount/100*5
        print("rejected status",status)
        print("final amount",amount-discount)
        finalamount=amount-discount
        

    

    if ne<=499:
        print("-------hen-shed egg slip-----")
        print("shed nam:",sn)
        print("eggs collected",ne)
        print("avg weight(g)",avg)
        print("grade:",grade)
        print("valume discount:no")
        print("rejected status",status)
        print("final amount",amount)
        finalamount=amount
        rj=rj+1
    totalegg=totalegg+ne
    totalamount=totalamount+finalamount
    if ne > highest_egg:
       highest_egg = ne
       highest_shed = sn





print("======dialy fram summary====")
print("egg collected",totalegg)
print("total sales amount:",totalamount)
print("highest egg count shed=",highest_shed,"(",highest_egg,")")
print("rejected shed:",rj)
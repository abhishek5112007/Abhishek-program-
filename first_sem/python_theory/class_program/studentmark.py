
def student_in():
    roll=int(input("ENTER THE ROLLNUMBER"))
    name=input("ENTER THE NAME ")
    sub1=int(input("ENTER 1ST MARK"))
    sub2=int(input("ENTER 2ND MARK"))
    sub3=int(input("ENTER 3RD MARK"))  
    return roll,name,sub1,sub2,sub3                
def total_mark(c,d,e):
    total=c+d+e
    return total
def avg_mark(sum):
    avg=sum//3
    return avg

def percentage_marks(sum):
    per=sum/300*100
    return per
def grade_got(p):
    if p>=90:
        grade="distingstion"
    elif p>80:
        grade="first class"
    elif p>70:
        grade="second clas"
    elif p>50:
        grade="third class"
    elif p>45:
        grade="just pass"  

    else:
        grade="fail"  
    return grade          
def out_put():
    global a,b,sum,p,ab,g
    print(f"ROOL NUMBER {a}\nNAME:{b}\nTOTAL :{sum}\nPERCENTAGE{p}\NAVG :{ab} \nGRADE:{g}: ")
n=int(input("ENTER NUMBER OF STUDENT:"))
for i in range(n):
  print(f"-------------ENTER STUDENT {i+1} DETAILS------------")
  a,b,c,d,e=student_in()
  sum=total_mark(c,d,e)
  ab=avg_mark(sum)
  p=percentage_marks(sum)
  g=grade_got(p)
  out_put()


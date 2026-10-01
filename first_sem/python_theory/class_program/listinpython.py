marks=[]#declares an list to store marks of sachin
for i in range(5):
    my_marks=int(input("enter the marks"))
    marks.append(my_marks)
for j in range( len(marks)):
    print(f"your subjest {j+1} mark is {marks[j]}")
print("",marks.count(10))

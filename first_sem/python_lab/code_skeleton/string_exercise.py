#Program to demonstrate real python string processing to clean and transform
# Output formate:
# ==============================
#  PROFILE CARD
# ==============================
#  Name     : Naveen Kumar
#  Initials : NK
#  Email    : naveen.kumar@company.com
#  Domain   : company.com
#  Phone    : *********3210
#  Valid    : True
# ==============================

raw_data = """
   naveen   KUMAR
naveen.kumar@COMPANY.com
+91-98765-43210
"""

name,email,phone=raw_data.split("\n")[1],raw_data.split("\n")[2],raw_data.split("\n")[3]
print("=============================")
print("PROFILE CARD")
print("=============================")
print("NAME       :",name[3].upper()+name[4:10]+name[12].upper()+name[13:].lower())
first,last=name.split()[0],name.split()[1]
initials=first[0].upper()+last[0].upper()
print("INITIALAS  :",initials)
print("EMAIL      :",email.lower())
print("DOMAIN     :",email.split("@")[1].lower())
print("PHONE      :",phone.replace("-",""))
print("PHONE      :","*"*9,phone[11:])
mobli=phone.replace("-","")
mobli=mobli[3:]
len=mobli.__len__()
if len==10:
    print("valid      : TRUE")
else:
    print("valid      : FALSE")
print("=============================")

age=int(input("enter your age"))
day=input("enter theweek day for example 1is monday and 7 nis sunday")
showtime=int(input("enter the show moring,after,evening"))
if day=="monday"or day=="tuesday"or day=="tursday"or day=="wensday"or day=="frriday":
        if showtime=="moring":
                if age<=5:
                        after=250/2
                        print("your ticket price is ",after)
                elif age<=59:
                        after=250
                        print("your ticket price is ",after)
                else :
                        after=250-250*10/100
                        print("your ticket price is ",after)
        elif showtime=="tuesday":
                if age<=5:
                     after=250+250/10
                     aftersecond=after/2

                     print("your ticket price is ",aftersecond)
                elif age<=59:
                     after=250
                     aftersecond=after+after/10
                     print("your ticket price is ",aftersecond)
                else:
                       after=250-250/10
                       aftersecond=after+after*1/1000
                       print("your ticket price is ",aftersecond)
        else:
               if age<=5:
                     aftersecond=250+250*30/100
                     after=250/2
                    
                     print("your ticket price is ",after)
               elif age<=59:
                    after=250
                    print("your ticket price is ",after)
               else :
                    after=250-250/10
                    print("your ticket price is ",after)
elif day=="saturday"or day=="sunday" :
       
       price=250+250*25/100
       if showtime==1:
                if age<=5:
                               after=price/2
                               print("your ticket price is ",after)
                elif age<=59:
                               after=price
                               print("your ticket price is ",after)
                else :
                               after=price-price*10/100
                               print("your ticket price is ",after)
       elif showtime==2:
                if age<=5:
                            after=price+price/10
                            aftersecond=after/2
       
                            print("your ticket price is ",aftersecond)
                elif age<=59:
                            after=price
                            aftersecond=after+after/10
                            print("your ticket price is ",aftersecond)
                else:
                              after=250-250/10
                              aftersecond=after+after*1/1000
                              print("your ticket price is ",aftersecond)
       else:
                      
                      if age<=5:
                            aftersecond=price+price*30/100
                            after=price/2
                           
                            print("your ticket price is ",after)
                      elif age<=59:
                           after=price
                           print("your ticket price is ",after)
                      else :
                           after=price-price/10
                           print("your ticket price is ",after)
else:
        print("error")                  
                 

age=int(input("Enter your age: "))
day=input("Enter the current day: ").strip().lower()
time=input("Enter the time of the day (morning,afternoon,evening): ").strip().lower()
price=250
if day=="sat" or day=="sun":
    price= 250*1.25      
else: price=250
if time=="morning":
    price=250  
elif time== "afternoon":
     price=250*1.10 
elif time== "evening":
    price=250*1.30   
if age < 5:
    price = price*0.50

elif age > 60:
    price=price*0.90

print("Final ticket price: ",price)        


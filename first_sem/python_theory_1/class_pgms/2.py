day = input("Enter the day of the week: ")
customer = input("Enter the type of customer: ")
time = input("Enter the time of the day (morning, afternoon, evening): ")

price = 300

if day == "sat" or day == "sun":
    price = 300 * 1.15
else:
    price = 300

if time == "morning":
    price = 300
elif time == "afternoon":
    price = 300 * 1.05
elif time == "evening":
    price = 300 * 1.10

if customer == "student":
    price = 300 * 0.90
elif customer == "senior":
    price = 300 * 0.85

print("Final ticket price:", price)
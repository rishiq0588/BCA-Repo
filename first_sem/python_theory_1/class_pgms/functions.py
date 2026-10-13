sub1=0
sub2=0
sub3=0
total=0
avg=0
percentage=0

def read_data():
    global sub1,sub2,sub3,name
    name = str(input("Enter students name:"))
    rollno=int(input("Enter your roll no: "))
    sub1=int(input("Enter sub1 marks: "))
    sub2=int(input("Enter sub2 marks: "))
    sub3=int(input("Enter sub3 marks: "))

read_data()

def getTotal():
    total=sub1+sub2+sub3
    print("Total is ",total)

getTotal()

def getAverage():
    average=sub1+sub2+sub3/3
    print("Avearge is ",average)

getAverage()
  

def percentage_std():
    percentage=total/100
    print("Percentage is ",percentage)

percentage_std()
  
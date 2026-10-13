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
    return name,rollno,sub1,sub2,sub3

read_data()

def getTotal():
    total=sub1+sub2+sub3
    print("Total is ",total)
    return getTotal
getTotal()

def getAverage():
    average=sub1+sub2+sub3/3
    print("Avearge is ",average)
    return getAverage

getAverage()
  


def findGrade():
    pass

def displayResult():
    pass

for number in range(2,5):
    a,b,c,d,e=read_data()
    total=getTotal()
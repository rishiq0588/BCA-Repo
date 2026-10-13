unit=int(input("how many units sold :"))
category=int(input("enter the type of category-->\n1=non commercial\n2=commercial\n--> :"))
threshold=int(input("yes=1\nno=0\n--> :"))
amount=1
if unit<=100 and category==1 and threshold==0:
    amount=unit*5
if unit<=100 and category==1 and threshold==1:  
    amount=unit*5+50
if unit<=100 and category==2 and threshold==0:
    amount=unit*10
if unit<=100 and category==2 and threshold==1:
    amount=unit*10+100 
    

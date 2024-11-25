i = 0
myList=[]

while i < 2:

    temp = float(input())

    if 0 <= temp <= 10:
        myList.append(temp)
        i += 1
    else:
        print("nota invalida")

avg = sum(myList) / 2
print("media =",avg)
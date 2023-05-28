p = int(input())
u1 = input()
if u1 == "mL":
    x = 1
elif u1 == "L":
    x = 1000
proporcaop = (p * x)
 
b = int(input())
u2 = input()
if u2 == "mL":
    y = 1
elif u2 == "L":
    y = 1000
 
proporcaob = (b * y)
 
total = proporcaop / proporcaob
 
print(total)

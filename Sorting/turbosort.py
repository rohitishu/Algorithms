t=int(input())
li=[]
new_li=[]
for i in range(t):
    n = int(input())
    li.append(n)
while li:
    minimum =li[0]
    for x in li:
        if(minimum>x):
            minimum= x;
    new_li.append(minimum)
    li.remove(minimum)
for elem in new_li:
    print(elem)
    
            


#create a two list and take input from users


n1 = int(input())
n2 = int(input())

l1= []
l2 = []


for i in range(n1):
    l1.append(int(input()))
    
for j in range(n2):
    l2.append(int(input()))
    
    
l = l1+l2

l = list(set(l))

l.sort()

n = len(l)

if(n%2==0):
    ans = (l[n//2]+l[(n- 1)])/2  //2
    print("{}.format(ans)))       
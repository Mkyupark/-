from collections import *

a = input()
counter = Counter(a)
srt = sorted(counter.items())
count =0 
alp =""
store =""

for i in range(len(srt)):
    if (int(srt[i][1]) %2 == 1):
        if count>=1:
            count+=1
            break
        else:
            alp = srt[i][0]
            count+=1

if count >=2:
    print("I'm Sorry Hansoo")
else:
    for k, v in srt:
        for j in range(v//2):
            store = (store + k)
    print(store + alp + store[::-1])

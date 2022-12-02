count = input()
total =0.0
temp =0.0
rec =0

def func1(a,b):
    if a == '+':
        b+=0.3
        return b
    elif a =='-':
        b-=0.3
        return b
    else:
        return b

for i in range(int(count)):
    line = input()
    if line[-2] =='A':
        temp = func1(line[-1], 4.0)
        total += temp*float(line[-4])
        rec += int(line[-4])
    elif line[-2] =='B':
        temp = func1(line[-1], 3.0)
        total += temp*float(line[-4])
        rec += int(line[-4])
    elif line[-2] == 'C':
        temp = func1(line[-1], 2.0)
        total += temp*float(line[-4])
        rec += int(line[-4])
    elif line[-2] == 'D':
        temp = func1(line[-1], 1.0)
        total += temp*float(line[-4])
        rec += int(line[-4])
    else:
        rec += int(line[-3])

print("%.2f" % (round(total/rec + 10**-10, 2)))

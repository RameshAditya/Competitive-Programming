'''input
100 10
22 75 26 45 72 81 47 29 97 2 75 25 82 84 17 56 32 2 28 37 57 39 18 11 79 6 40 68 68 16 40 63 93 49 91 10 55 68 31 80 57 18 34 28 76 55 21 80 22 45 11 67 67 74 91 4 35 34 65 80 21 95 1 52 25 31 2 53 96 22 89 99 7 66 32 2 68 33 75 92 84 10 94 28 54 12 9 80 43 21 51 92 20 97 7 25 67 17 38 100
'''

n, d=[int(i) for i in input().split(" ")]
A=[int(i) for i in input().split(" ")]
A.sort()

ans=n
mi=A[0]
ma=A[-1]
l=0
r=0
for i in A:
	if i - mi>d:
		l+=1

for i in A:
	if ma-i>d:
		r+=1
	
print(min(l,r))
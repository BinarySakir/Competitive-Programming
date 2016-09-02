a, b = 1, 1
res = 0
while True:
	a, b = b, a+b
	if(a > 4000000): break
	else:
		if a % 2 == 0: res += a
print res
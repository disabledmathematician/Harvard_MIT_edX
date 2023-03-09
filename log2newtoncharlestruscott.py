def NewtonLog2(d):
	g = d 
	while(2 ** g - d >= 0.000001):
		g = g  - ((2 ** g) - d) / (2 ** g)
		print(g)
	print("log2 {} is {}".format(d, g))
	print("2^({})= {}".format(g, 2 ** g))
	return g
	
# Charles Truscott Watters

NewtonLog2(0.90210)
print("Я говорю Русская студентка")
""" log2 0.1993 is -2.326985786465021
2^(-2.326985786465021)= 0.199300082644165

[Program finished]

"""
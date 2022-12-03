import matplotlib.pyplot as plt
import numpy as np
import pandas as pd
from mpl_toolkits import mplot3d
	
def return_primes(count):
	nums = []
	r = 1000
	PrimeFound = False
	for n in range(2, r + 1, 1):
		for x in range(2, n):
				if n % x == 0:
					PrimeFound = False
					break
				else:
					PrimeFound = True
		if PrimeFound == True:
				nums.append(n)
		PrimeFound = False
				
	print("The {} prime number is {}".format(count, nums[count]))
	return int(nums[count])
def f(x, y):
	return np.sin(x * np.pi / 180) + np.cos(y * np.pi / 180)
def main():
	plt.figure(0, dpi=600, figsize=[20, 20])
	x, y = list(return_primes(abs(x)) for x in range(-100, 100, 1)), list(return_primes(abs(x)) for x in range(-100, 100, 1))
	print(x, y)
	x, y = np.meshgrid(x, y)
	z = f(x, y)
#	for x in range(11):
#		print(return_primes(x).__next__())
	
	g = plt.axes(projection='3d')
	g.set_title("Trigonometric Distribution of the Primes in Three Dimensions. Charles Truscott Watters")
	g.set_zlabel("z = sin(x) + cos(y) where x and y are the degrees of first 100 primes")
	g.set_xlabel("x. the first 100 primes. Thank you Harvard University")
	g.set_ylabel("y. the first 100 primes. Thank you Massachusetts Institute of Technology")
	g.plot_surface(x, y, z, cmap='rainbow')
#	plt.savefig('1.pdf', dpi=600)
	g.view_init(5, 10)
	plt.savefig('2.pdf', dpi=600)
	g.view_init(10, 5)
	plt.savefig('3.pdf', dpi=600)
	g.view_init(-5, 10)
	plt.savefig('4.pdf', dpi=600)
	g.view_init(20, 40)
	plt.savefig('5.pdf', dpi=600)
if __name__ == "__main__": main()
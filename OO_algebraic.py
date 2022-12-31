# -*- coding: utf-8 -*-
"""
Created on Sat Dec 31 03:03:51 2022

@author: Charles Truscott Watters
"""
import numpy as np

class Equation(object):
    def __init__(self, a, x, b, c, d):
        self.a = a
        self.x = x
        self.b = b
        self.c = c
        self.d = d

class LinearEquation(Equation):
    def __init__(self, a, x, c):
        super().__init__(a)
        super().__init__(x)
        super().__init__(c)
    def return_linear_list_entry(self):
        X = []
        Y = []
        for p in self.a:
            for q in self.x:
                Y.append(p * q + self.c)
                break
        return (X, Y)
class Polynomial(Equation):
    def __init__(self, a, x, b, c, d, r=[-10, 10]):
        super().__init__(a, x, b, c, d)
        self.r = r
        self.x = str("x")
    def set_polynomial(self, X, Y):
        self.x_coords = np.array(X)
        self.polynomial = np.array(Y)
    def str_binomial(self):
        return str("${}{}^2 + {}{} + {}$".format(self.a, self.x, self.b, self.x, self.c))
    def str_trinomial(self):
        return str("${}{}^3 + {}{}^2 + {}{} + {}$".format(self.a, self.x, self.b, self.x, self.c, self.x, self.d))
    def binomial(self):
        Y = []
        X = []
        for x in range(self.r[0], self.r[1] + 1):
            Y.append(self.a * x ** 2 + self.b * x + self.c)
            X.append(x)
        self.set_polynomial(X, Y)
        return X, Y
    def trinomial(self):
        Y = []
        X = []
        for x in range(self.r[0], self.r[1] + 1):
            Y.append(self.a * x ** 3 +self.b * x ** 2 + self.c * x + self.d)
            X.append(x)
        self.set_polynomial(X, Y)
        return X, Y
    
    def add(self, polynomial_two):
        return self.polynomial + polynomial_two.polynomial
    def subtract(self, polynomial_two):
        return self.polynomial - polynomial_two.polynomial
    def multiply(self, polynomial_two):
        return self.polynomial * polynomial_two.polynomial
    def divide(self, polynomial_two):
        return self.polynomial / polynomial_two.polynomial
def main():
    binomial = Polynomial(a=93, x=None, b=55, c=2, d=None)
    print(binomial.binomial())
    import matplotlib.pyplot as plt
    plt.figure(0, dpi=600, figsize=[9, 5])
    x, y = binomial.binomial()
    plt.plot(x, y, color='gold', label="{}".format(binomial.str_binomial()))
    del x; del y
    trinomial = Polynomial(a=93, x=None, b=55, c=90, d=2023)
    x, y = trinomial.trinomial()
    plt.plot(x, y, color='silver', label="{}".format(trinomial.str_trinomial()))
    plt.title("Binomial {}, Trinomial {}".format(binomial.str_binomial(), trinomial.str_trinomial()))  
    plt.xlabel("Charles Truscott, x")
    plt.ylabel("Charles Truscott, y")
    x1, y1 = binomial.binomial()
    x2, y2 = trinomial.trinomial()
    plt.plot(x1, binomial.add(trinomial), color='black', label="{} + {}".format(binomial.str_binomial(), trinomial.str_trinomial()))
    plt.plot(x1, binomial.subtract(trinomial), color='yellow', label="{} - {}".format(binomial.str_binomial(), trinomial.str_trinomial()))
    plt.plot(x1, binomial.multiply(trinomial), color='blue', label="{} * {}".format(binomial.str_binomial(), trinomial.str_trinomial()))
    plt.plot(x1, trinomial.divide(binomial), color='red', label="{} / {}".format(trinomial.str_trinomial(), binomial.str_binomial()))
    plt.legend()
    c = 0
    for x in range(150000, 1000000, 50000):
        c += 1
        plt.xlim(-10, 10)
        plt.ylim(-x, x)
        plt.savefig('./{}.jpg'.format(c))
#    plt.show()

if __name__ == "__main__": main()
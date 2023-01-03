# -*- coding: utf-8 -*-
"""
Created on Mon Jan  2 07:08:25 2023

@author: Truscott
"""


class Arithmetic(object):
    
    @property
    def numbers(self):
        return self.numberlist

    @numbers.setter
    def numbers(self, nl):
        self.numberlist = nl
        for x in ["first", "second", "third", "fourth"]:
            self.x = self.numberlist[str(x)]
            

    def print_numbers(self):
        for x in ["first", "second", "third", "fourth"]:
            print(self.numberlist.get(x))
    @property
    def ops(self):
        return self.ops
    @ops.setter
    def ops(self, operations):
        self.operations = operations
        for x in ["1", "2", "3", "4"]:
            self.x = self.operations[x]
    def perform(self):
        count = 0
        other_count = 0
        X = list(self.numberlist.values())
        Y = list(self.operations.values())
        if len(X) != len(Y):
            raise ValueError("Lengths must be the same of numerics and operations")
        for x in range(len(Y)):
            if Y[x] == "+":
                count += int(X[x])
            if Y[x] == "-":
                count -= int(X[x])
            if Y[x] == "*":
                count *= int(X[x])
            if Y[x] == "/":
                count /= int(X[x])


        return str(count)
def Charles():
    A = Arithmetic()
    A.numbers = {"first": 93, "second": 55, "third": 13, "fourth": "11"}
    A.print_numbers()
    A.ops = {"1": "+", "2": "-", "3": "+", "4": "-"}
#    X = list({"1": "+", "2": "-", "3": "+", "4": "-"}.values())
#    print(X[0])
    try:
        print("The Arithmetic Expression (solved using Decorators) is: {}".format(A.perform()))
    except ValueError as e:
        print(e)
    
if __name__ == "__main__": Charles()
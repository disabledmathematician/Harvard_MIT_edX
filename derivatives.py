# -*- coding: utf-8 -*-
"""
Created on Thu Dec 22 11:28:07 2022

@author: Charles Truscott
"""

import matplotlib.pyplot as plt
import numpy as np

def main():
#    plt.figure(0, dpi=300, figsize=[10, 5])
    x = np.linspace(0, 50, 1000)
    y = np.linspace(-0, 50, 1000)
    yprime = np.linspace(0, 50, 1000)
    integral_of_y = np.linspace(0, 50, 1000)
    y = np.sqrt(y)
    yprime = 1/(2 * np.sqrt(yprime))
    integral_of_y = (2 * integral_of_y ** (3/2)) / 3
    plt.xlim(0, 20)
    plt.ylim(0, 20)
    plt.plot(x, y, label="square root of x")
    plt.plot(x, yprime, label="1/2*sqrt(x)")
    plt.plot(x, integral_of_y, label="(2*x**3/2) / 3")
    plt.legend()
    plt.show()
if __name__ == "__main__": main()
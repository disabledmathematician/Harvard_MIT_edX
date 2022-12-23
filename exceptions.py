# -*- coding: utf-8 -*-
"""
Created on Thu Dec 22 20:35:56 2022

@author: Charles
"""

def read_lines(filename):
    if filename.endswith('.txt') == False: raise ValueError()
    fh = open(filename, 'r')
    return fh.readlines()

def main():
    try:
        for l in read_lines('Lines.doc'): print(l.strip('\n'))
    except IOError:
        print("Filename not found")
    except ValueError:
        print("File format must be .txt")
    


def write_lines():
    fh = open('Lines.txt', 'w+')
    for x in range(0, 5):
        fh.write("{}{} This is a line of text\n".format(0, x))
    fh.close()
if __name__ == "__main__": main()
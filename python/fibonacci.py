#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  fibonacci.py
# F(n) = 0 dla n = 0
# F(n) = 1 dla n = 1
# F(n) = F(n - 1) + F(n - 2) dla n > 1

def czy_naturalna(n):
    if n.isdigit():
        return True
    return False

def fib_it(n):
    if n < 2:
        return n
    a, b, wynik = 0, 1, 0
    
    for i in range(2, n + 1):
        #if a > 0:
            #print("{}/{} = {}" .format(b, a, b / a))
        wynik = a + b
        a, b = b, wynik
        
    return wynik
    
def fib_rek(n):
    if n < 2:
        return n
    return fib_rek(n - 1) + fib_rek(n - 2)
        


def main(args):
    #assert fib_it(0) == 0
    #assert fib_it(1) == 1 
    #assert fib_it(10) == 55
    #assert fib_it(16) == 987
    assert fib_it(19) == 4181
    n = input('Który wyraz ciągu? ')
    while not czy_naturalna(n):
        print('Błędne dane!')
        n = input('Który wyraz ciągu? ')
    
    print("F_rek({}) = {}" .format(n, fib_rek(int(n))))
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

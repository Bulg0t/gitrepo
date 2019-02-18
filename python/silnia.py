#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  silnia.py
# 
# n! = 1 dla n = 0
# n! = n*(n-1)! dla n >= 1
# n! = 1 * ... * n
# 4! = 1 * 2 * 3 * 4
def silnia_it(n):
    wynik = 1 
    for i in range(1, n + 1):
        wynik = wynik * i
    return wynik
    
def silnia_rek(n):
    # n! = (n - 1)! * n
    # 4! = 3! * 4
    # 3! = 2! * 3
    # 2! = 1! * 2
    # 1! = 0! * 1
    # 0! = 1
    # 1! = 1 * 1
    # 2! = 1 * 2
    # 3! = 2 * 3
    # 4! = 6 * 4
    if n == 0:
        return 1
    return silnia_rek(n - 1) * n
    
def main(args):
    assert silnia_rek(5) == 120
    assert silnia_rek(1) == 1
    assert silnia_rek(4) == 24
    assert silnia_rek(0) == 1
    n = int(input('Podaj liczbę naturalną : '))
    print("{}! = {}" .format(n, silnia_rek(n)))

    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

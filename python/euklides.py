#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  euklides.py

def nwdv1(a, b):
    """ wersja klasyczna """
    while a != b:
        if a > b:
            a = a - b
        else: 
            b = b - a
    # print(a)
    return a


def nwdv2(a, b):
    """ wersja optymalna """
    while a > 0 :
        a = a % b
        b = b - a
        
    # print(a)
    return b    

def testuj():
    assert(nwdv1(20, 4) == 4)
    assert(nwdv2(20, 4) == 4)
    assert(nwdv2(11, 4) == 1)
    
    
def main(args):
    a = int(input('Podaj liczbę a: '))
    b = int(input('Podaj liczbę b: '))
    # nwdv1(a, b)
    # print(nwdv2(a, b))
    testuj()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

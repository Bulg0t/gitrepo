#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  rekurencja01.py
import turtle


def rysuj_it(ile, bok, kat):
    for i in range(ile):
        turtle.forward(bok)
        turtle.right(kat)
        
def rysuj_rek(ile, bok, kat):
    if ile < 1:
        return
    turtle.forward(bok)
    turtle.right(kat)
    rysuj_rek(ile - 1, bok, kat)

    

def main(args):
    turtle.setup(800, 600)
    rysuj_rek(100000, 200, 90)
    turtle.done()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

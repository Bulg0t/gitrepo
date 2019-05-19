#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  wykres01.py
import matplotlib.pyplot as plt

def main(args):
    # y = a*x + b
    a = int(input('Podaj współczynnik a: '))
    b = int(input('Podaj współczynnik b: '))
    x = range(-10, 11)
    y = [a * i + b for i in x]
    
    plt.plot(x, y)
    plt.title('Wykres funkcji, która się równa {}*x + {}'.format(a, b))
    plt.grid(True)
    plt.show()
    return 0
    

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

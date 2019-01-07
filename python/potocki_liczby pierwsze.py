#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  liczby pierwsze.py


def main(args):
    n = int(input('Podaj liczbę: '))
    i = 2
    while i * i <= n:
        if n % i == 0:
            print('liczba złożona')
            return 0
        i = i + 1
    print('liczba pierwsza')
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

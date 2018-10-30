#!/usr/bin/env python
# -*- coding: utf-8 -*-

a = input('Podaj bok a:')
b = input('Podaj bok b:')

obwod = 2 * (int(a) + int(b))
print(obwod)

def main(args):
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

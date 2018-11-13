#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-suma.py



def main(args):
    #Pętla for powtarza się określoną ilość razy.
    suma= 0
    for i in range(1, 101, 2):
        print(suma)
        suma += i
        # suma = suma + is
    print() #wydruk pustego wiersza
    print("Suma liczb <0;101>", suma)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

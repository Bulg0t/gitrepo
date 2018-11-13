#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  petla-suma.py



def main(args):
    #Pętla for powtarza się określoną ilość razy.
    suma= 0
    liczba = int(input('Podaj liczbę: '))
    while suma< 75:
        suma += liczba
        print(suma)
        liczba = int(input('Podaj liczbę: '))
        
    print() #wydruk pustego wiersza
    print("Suma liczb:", suma)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

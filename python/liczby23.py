#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  liczby23.py
#  

def liczby2():
    """ 
    Drukowanie wszystkich 2-cyfrowych liczb 
    o niepowtarzających się cyfrach 
    nie drukujemy: 11, 22, 33, ...
    """
    licznik = 0
    for i in range(1, 10): # pętla dziesiątek
        for j in range(0, 10): #pętla jedności
            if i != j:
                print("{}{}".format(i, j))
                licznik = licznik + 1 
    print("Liczb 2-cyfrowych", licznik)
        

def main(args):
    liczby2()
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

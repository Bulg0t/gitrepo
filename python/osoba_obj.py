#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  osoba_obj.py

class Osoba():
    """ Prosta klasa opisująca osobę """
    
    def __init__(self, imie, nazwisko, wiek = 0):
        self.imie = imie
        self.nazwisko = nazwisko
        self.ustawPlec()
        self.wiek = wiek
        
    def ustawPlec(self):
        if self.imie[-1] == 'a':
            self.plec = 'k'
        else: 
            self.plec = 'm'
        
        

def main(args):
    o1 = Osoba('Adam', 'Słodowy')
    o1.wiek = 23
    o2 = Osoba('Ewa', 'Kos')
    o2.wiek = 20
    
    print(o1.imie, o1.nazwisko, o1.plec, o1.wiek)
    print(o2.imie, o2.nazwisko, o2.plec, o2.wiek)
    
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

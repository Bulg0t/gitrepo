#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  osoba_str.py

def zapisz_dane(imie, nazwisko):
    osoba = [imie, nazwisko]
    return osoba

def zapisz_dane2(imie, nazwisko):
    osoba = {'imie': imie, 'nazwisko': nazwisko}
    return osoba

def main(args):
    o1 = zapisz_dane('Adam', 'Słodowy')
    print(o1[0], o1[1])
    o2 = zapisz_dane2('Ewa', 'Kos')
    print(o2['imie'], o2['nazwisko'])
    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

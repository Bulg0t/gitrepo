#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  napisy.py

def pobierz_dane1():
    imie = input('Podaj imię: ').strip().capitalize()
    nazwisko = input('Podaj nazwisko: ').strip().capitalize()
    print('Witaj {} {}!'.format(imie, nazwisko))
                                
    if len(imie) > len(nazwisko):
        print ('Imię > nazwisko')
    elif len(imie) < len(nazwisko):
        print ('Imię < nazwisko')
    else:
        print ('Imię == nazwisko')
        
    if imie[-1] == 'a':
        print('Jesteś kobietą!')
    else: 
        print('Jesteś mężczyzną!')
        
        
def pobierz_dane2():
    nazwa = input('Imię i nazwisko: ').strip().capitalize()
    while nazwa.count(' ') != 1:
            nazwa = input('Imię i nazwisko: ').strip().capitalize()
    samogloski = set(['a', 'e', 'o', 'u', 'i', 'y', 'ę', 'ą'])
    inne = set([',', '.', '!', '?', ' ', '\t'])
    
    ileSa = 0
    ileSp = 0
    for znak in nazwa:
        if znak in samogloski:
            ileSa += 1
        elif znak not in inne:
            ileSp += 1
    if ileSa > ileSp:
        print('Samogłoski > Spółgłoski')
    elif ileSa < ileSp:
        print('Spółgłoski > Samogłoski')
    else:
        print('Samogłoski = Spółgłoski')
    
    

def pobierz_dane3():
    napis1 = input('Tekst: ').strip()
    napis2 = ''
    inne = set([',', '.', '!', '?', ' ', '\t'])
    for znak in napis1:
        if znak not in inne and not znak.isdigit():
            if znak.islower():
                napis2 += znak.upper()
            else:
                napis2 += znak.lower()
        else:
            napis2 += znak
    print(napis2)
    
    
def main(args):
    #pobierz_dane1()
    pobierz_dane2()
    #pobierz_dane3()
    return 

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

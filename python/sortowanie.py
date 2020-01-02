#!/usr/bin/env python
# -*- coding: utf-8 -*-
#  sortowanie.py
from random import randint

def wypelnij(lista, n):
    for i in range(n):
        lista.append(randint(0, 100))

def wyswietl(lista):
    for i in lista:
        print(i, " ",end='')
    print()

def zamien(tab, j, i):
    tmp = tab[j]
    tab[j] = tab[i]
    tab[i] = tmp

def sort_boubble(tab):
    n = len(tab)
    for i in range(n-1, 0, -1):
        for j in range(0, i):
            if tab[j] > tab[j+1]:
                zamien(tab, j, j+1)

def selection_sort(tab):
    n=len(tab)
    for i in range(0, n):
        k = i
        for j in range (i+1, n):
            if tab[j]<tab[k]:
                k = j
        zamien(tab, k, i)

def main(args):
    n = int(input('Ile wylosować liczb? '))
    lista = []
    wypelnij(lista, n)
    wyswietl(lista)
    selection_sort(lista)
    wyswietl(lista)
    return 0
if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

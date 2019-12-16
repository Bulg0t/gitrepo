#!/usr/bin/env python
# -*- coding: utf-8 -*- 
from random import randint

def wypelnij(lista, n):
	for i in range(n):
		lista.append(randint(0, 100))

def wyswietl(lista):
	for i in lista:
		print(i, " ", end = '')	
	print()

def main(args):
	n = int(input('Ile wylosować liczb? '))
	lista = []
	wypelnij(lista, n)
	print(lista)
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

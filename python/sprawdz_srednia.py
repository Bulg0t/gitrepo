#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sprawdz_srednia.py
#  
#  Copyright 2021 Michał <Michał@BULG0T>
#  
#  This program is free software; you can redistribute it and/or modify
#  it under the terms of the GNU General Public License as published by
#  the Free Software Foundation; either version 2 of the License, or
#  (at your option) any later version.
#  
#  This program is distributed in the hope that it will be useful,
#  but WITHOUT ANY WARRANTY; without even the implied warranty of
#  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#  GNU General Public License for more details.
#  
#  You should have received a copy of the GNU General Public License
#  along with this program; if not, write to the Free Software
#  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
#  MA 02110-1301, USA.
#  
#  




def main(args):
	lista_liczb = []
	x = int(input('Ile ocen? '))
	i = 0
	while i < x:
		i+=1
		print("Podaj ocenę z przedziału 1-6: ")
		z = int(input())
		if(1<=z<=6):
			lista_liczb.append(z)
		else:
			print("Błędny zakres ocen!")
			i-=1
	ilosc_liczb = len(lista_liczb) 
	suma = 0
	srednia = 0
	for liczba in lista_liczb:
		suma = suma + liczba
	srednia = suma / ilosc_liczb
	print('Srednia z liczb to: ' + str(srednia) )
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

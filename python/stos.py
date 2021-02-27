#!/usr/bin/env python
# -*- coding: utf-8 -*-
#  
class Stack:
	def __init__(self):
		self.items = []
	def view(self):
		return self.items
	def isEmpty(self):
		return self.items ==[]
	def push(self, item):
		self.items.append(item)
	def pop(self):
		return self.items.pop()
	def size(self):
		return len(self.items)

def main(args):
	s=Stack()
	print("Czy stos jest pusty? " + str(s.isEmpty()))
	print("Dodaje trzy liczby do stosu: 1, 5, 15")
	s.push(1)
	s.push(5)
	s.push(15)
	print("Stos: "+str(s.view()))
	print("Czy stos jest pusty? " + str(s.isEmpty()))
	print ('Rozmiar: ' + str(s.size()))
	print("Usuwam liczby z wierzchołka stosu: ")
	print (s.pop())
	print(s.pop())
	print(s.pop())
	print("Czy stos jest pusty? " + str(s.isEmpty()))
	print("Rozmiar: " + str(s.size()))
	
	return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

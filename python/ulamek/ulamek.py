class Ulamek:
	def __init__(self, l=0, m=1):
		self.l = int(l)
		self.m = int(m)
		self.__ustawMian(m)
		self.setLicz(l)
		self.setMian(m)
		self.getLicz()
		self.getMian()
	def __ustawMian(self, m):
		if (m != 0):
			self.m = m
			return True
		else:
			print("Mianownik jest równy zero!")
			return False
	def drukuj(self):
		print(self.l, "/", self.m)
	def setLicz(self, l):
		self.l = l
		return True
	def setMian(self, m):
		if(m != 0):
			self.m = m
			return True
		else:
			print("Mianownik jest równy zero")
			return False
	def getLicz(self):
		return self.l
	def getMian(self):
		return self.m
#def nwdv1(a, b):
#    """ wersja klasyczna """
#    while a != b:
 #       if a > b:
   #         a = a - b
   #     else: 
    #        b = b - a
    # print(a)
   # return a


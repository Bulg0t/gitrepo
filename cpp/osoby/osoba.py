class Osoba:
	def __init__(self, imie, nazwisko):
		self.imie = imie
		self.nazwisko = nazwisko
		self.__setPlec()
		self.min_length = 2
		
	def __setPlec(self):
		try:
			if self.imie[-1] == 'a':
				self.plec = 'k'
			else:
				self.plec = 'm'
		except:
			self.plec = ''
			
	def setImie(self, imie):
		if len(imie.strip()) > self.min_length:
			self.imie = imie.strip()
		else:
			print("Błędne dane!")
	def get_Imie(self):
		return self.imie


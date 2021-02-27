class Konto:
	def __init__(self, ile=0):
		self.bilans = ile
		
	def wplata(self, ile):
		self.bilans += ile
		return self.bilans
		
	def wplata(self, ile):
		self.bilans -= ile
		return self.bilans
		
class KontoStart(Konto):
	def __init__(self, ile=0, debet=0):
		Konto.__init__(self, ile)
		self.debet = debet
	def wyplata(self, ile):
		if self.bilans - ile < self.debet:
			print("Brak srodkow")
			return self.bilans
		else:
			return Konto.wyplata(self, ile)
			
o1 = KontoStart(100, 20)
o2 = KontoStart(50, 10)

print("Stan konta: ", o1.wplata(50))
print("Stan konta: ", o2.wplata(50))
print("Stan konta: ", o1.wyplata(100))
print("Stan konta: ", o2.wyplata(150))



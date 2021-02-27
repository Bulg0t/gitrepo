from osoba import Osoba

def main():
	osoba1 = Osoba('Adam', 'Slodowy')
	osoba1.setImie('Koralina')
	print(osoba1.get_Imie())
	print(osoba1.__dict__)
	return 0
main()

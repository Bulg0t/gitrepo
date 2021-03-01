#!/usr/bin/env python
# -*- coding: utf-8 -*-
#

from ulamek import Ulamek


def main(args):
	ulamek1 = Ulamek()
	ulamek1.setLicz('6')
	ulamek1.setMian('3')
	ulamek1.drukuj()
	print(ulamek1.getLicz(), "/", ulamek1.getMian())
	return 0
if __name__ == '__main__':
	import sys
	sys.exit(main(sys.argv))

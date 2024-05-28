#!/ur/bin/env python
# -*- coding: utf-8 -*-
# @author: Diogo 'dsm' Soares
#

from sys import stdin

def ans(string):
	count_cons = 0
	v_int = []
	for c in lower(string):
		print(c)
		if(c != 'a' or c != 'e' or c != 'i' or c != 'o' or c != 'u'):
			v_int.append(1)
		else:
			v_int.append(0)
	print(v_int)
	return 0

if __name__ == "__main__":
	mapa = {
		'@': 'a',
		'&': 'e',
		'!': 'i',
		'*': 'o',
		'#': 'u'
	}
	try:
		while True:
			linha = input()
			#print(linha)
			for c in linha:
				if(c in mapa):
					print(mapa[c], end='')
				else:
					print(c, end='')
			print()
	except Exception as e:
		#print(e)
		pass

#!/usr/bin/env python
# -*- coding: utf-8 -*-
#
#  sort_wyb.py
#
#

from random import randint

def wypelnij(tab, a, b):
    ile = 0
    while ile < a:
        liczba = randint(0, b)
        if tab.count(liczba) == 0:
            tab.append(liczba)
            ile += 1
    return tab


def sort_wyb(tab, a):
    for i in range(0, n):
        k = i
        j = i + 1
        for j in range(j, a + 1):
            if tab[j] < tab[k]:
                tab[j], tab[k] = tab[k], tab[j]
    return tab




def main(args):
    ile = 10
    tab = [ile]
    max = int(input("Jaka maksymalna liczbe chcesz wlozyc do tabeli: "))
    print("Tabela przed sortowaniem: ", wypelnij(tab, ile, max))
    print("Tabela po sortowaniu: ", sort_wyb(tab, ile))


    return 0

if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))


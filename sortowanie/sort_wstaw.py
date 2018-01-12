#!/usr/bin/env python
# -*- coding: utf-8 -*-

form math import floor

def sort_wstaw(lista):
    """wersja liniowa"""
    for i in range(1, len(lista)):
        el = lista[i]
        k = i - 1
        while k >= 0 and lista[k] > el:  # wyszukiwanie pozycji
            lista[k + 1] = lista[k]  # przesuwanie elementów w góre tabeli
            k -= 1
        lista[k + 1] = el  # wstawianie elememtu
    return lista

def sort_wstaw_bin(lista):
    """wersja binarna"""
    for i in range ( 1, len (lista)):
        el = lista [i]
        k= wyszukaj_bin(lewy,prawy,lista,el)

        #tworzenie listy z wstawionym elementem
        #todo
        lista= lista [:k] + [el] + lista [k:i] + lista [i + 1:]
    return lista

def wyszukaj_binarnie(lista, el):
    lewy, prawy = 0, len(lista) - 1
    while lewy < prawy:
        srodek = floor((lewy + prawy) / 2)
        if el <= lista[srodek]:
            prawy = srodek
        else:
            lewy = srodek + 1
    if lista[lewy] == el:
        return lewy

# for (int 1=0;i < n)
# n - to ilość elementów w tablicy


def main(args):
    lista = [4, 3, 7, 0, 2, 3, 1, 9, -4]
    lista = [9, 8, 7, 6, 5, 4 ,3, 2, 1]
    print (lista)
    #[3, 4, 7, 0, 2, 3, 1, 9]
    #[3, 4, 7, 0, 2, 3, 1, 9]
    #[0, 3, 4, 7, 2, 3, 1, 9]
    print(sort_wstaw(lista))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

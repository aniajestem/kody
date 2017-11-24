#!/usr/bin/env python
# -*- coding: utf-8 -*-


from random import randint


def minmax(lista):
    min = lista[0]
    for el in enumerate(min):
        if el < min:
            min = el

    return min





def minimum(lista):
    min = lista[0]
    for i in lista:
        if i < min:
            min = i
    return min


def maksimum(lista):
    max = lista[0]
    for i in lista:
        if i > max:
            max = i
    return max


def losuj(ile, zakres):
    lista = []
    for i in range(ile):
        lista.append(randint(0, zakres))
    return lista


def main(args):
    ile = 20
    zakres = 50
    lista = losuj(ile, zakres)
    assert lmin([7, 4, 9, 1, 3, 0]) == 0
    assert lmax([7, 4, 9, 1, 3, 0]) == 9
    print (lista)
    print ("Min:", lmin(lista))
    print ("max:", lmax(lista))
    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))

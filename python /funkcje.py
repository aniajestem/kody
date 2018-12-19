#!/usr/bin/env python
# -*- coding: utf-8 -*-


def suma(a,b):
    wynik1 = a + b
    return wynik1


def roznica(a,b):
    wynik2 = a - b
    return wynik2


def iloczyn(a,b):
    wynik3 = a * b
    return wynik3


def iloraz(a,b):
    wynik4 = a / b
    return wynik4


def main(args):
    a = int(input("Podaj 1 liczbę: "))
    print (a)
    b = int(input("Podaj 2 liczbę: "))
    print (b)

    print ("Suma: ", suma(a, b))
    print ("Różnica: ", roznica(a, b))
    print ("Iloczyn:", iloczyn(a, b))
    print ("Iloraz: ", iloraz(a, b))

    return 0


if __name__ == '__main__':
    import sys
    sys.exit(main(sys.argv))
